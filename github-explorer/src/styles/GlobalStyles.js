import { createGlobalStyle } from "styled-components";

export const GlobalStyle = createGlobalStyle`

:root {
    --primary-color: ${({ theme }) => theme.primary};
    --secondary-color: ${({ theme }) => theme.secondary};
    --background-color: ${({ theme }) => theme.background};
    --text-color: ${({ theme }) => theme.text};
  }

* {
    margin: 0;
    padding: 0;
}

body {
    font-family: Verdana, Geneva, Tahoma, sans-serif;
    background-color: var(--background-color);
    color: var(--text-color);
}

button {
    cursor: pointer;
}
`

