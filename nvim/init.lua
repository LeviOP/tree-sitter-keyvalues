vim.filetype.add({
    extension = {
        res = "keyvalues"
    }
})

require("nvim-web-devicons").set_icon {
    ["res"] = {
        icon = "",
        name = "Resource"
    }
}

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.keyvalues = {
    install_info = {
        url = "https://github.com/LeviOP/tree-sitter-keyvalues",
        files = { "src/parser.c" },
        branch = "main"
    }
}
