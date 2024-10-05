import styled from "styled-components";

export const Container = styled.div`
    height: 100vh;
    display: flex;
    justify-content: center;
`

export const Content = styled.div`
    display: flex;
    flex-direction: column;
    justify-content: center;
`

export const Search = styled.div`
margin-top: 0.55rem;
    display: flex;
    gap: 0.55rem;
`

export const Input = styled.input`
    color: #ffff;
    background-color: var(--secondary-color);
    border: 1px solid var(--primary-color);
    border-radius: 6px;
    width: 100%;
    padding-left: 1rem;
`

export const Button = styled.button`
    background-color: var(--primary-color);
    color: var(--text-color);
    border: 1px solid var(--primary-color);
    border-radius: 6px;
    font-weight: bold;
    font-size: 24px;
    padding: 12px;

    &:hover {
        background-color: var(--secondary-color);
        transition: 0.3s;

        svg {    
            color: var(--primary-color);
            transition: 0.2s;
        }
    }
`

export const Loading = styled.div`
    width: 100%;
    height: 100%;
    display: flex;
    justify-content: center;
    align-items: center;
`

