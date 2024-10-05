import { useState, useEffect } from 'react';
import { Container, Content, Search, Input, Button } from './styles';
import { FaSearch } from 'react-icons/fa';
import { VortexSpinner } from '../../Components/Spinner';

export function Dashboard() {
    const [username, setUsername] = useState('')
    const [search, setSearch] = useState('')
    const [repos, setRepos] = useState([])
    const [loading, setLoading] = useState(false)

    useEffect(() => {
        if (search) {
            fetch(`https://api.github.com/users/${username}/repos`)
                .then(res => {
                    if (!res.ok) {
                        throw new Error('Usuário não encontrado')
                    }
                    return res.json()
                })
                .then(data => setRepos(data))
                .catch(err => console.error(err))
        }
    }, [search])


    return (
        <Container>
            <Content>
                <h1>Digite o Usuário GITHUB</h1>
                <Search>
                    <Input
                        name="search"
                        type="text"
                        placeholder="Usuário"
                        onChange={e => setUsername(e.target.value)}
                    />
                    <Button onClick={() => setSearch(username)}><FaSearch /></Button>
                </Search>
                <div>
                    {repos.map(repo => (
                        <div key={repo.id}>
                            {repo.name}
                        </div>
                    ))}
                </div>
            </Content>
        </Container>
    );
}
