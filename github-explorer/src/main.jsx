import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import App from './App.jsx'
import { GlobalStyle } from './styles/GlobalStyles.js'

import dark from '../src/styles/themes/dark.js'
import { ThemeProvider } from 'styled-components'

createRoot(document.getElementById('root')).render(
  <StrictMode>
    <ThemeProvider theme={dark} >
      <App />
      <GlobalStyle />
    </ThemeProvider>
  </StrictMode>,
)
