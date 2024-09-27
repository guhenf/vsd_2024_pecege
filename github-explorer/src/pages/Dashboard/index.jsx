import { FaSearch } from "react-icons/fa"
import { Container, Content } from "./styles"

export function Dashboard() {
    return (
        <Container>
            <Content>
                <h1>Repósitorios</h1>
                <div>
                    <input type="text" />{' '}
                    <button>Buscar <FaSearch /></button>
                </div>
            </Content>
        </Container>
    )
}