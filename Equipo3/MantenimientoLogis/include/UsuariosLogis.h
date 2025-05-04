//Karina Alejandra Arriaza Ortiz  02/05/2025
#ifndef USUARIOSLOGIS_H
#define USUARIOSLOGIS_H
#include <string>
#include "bitacora.h"

class usuarios {
private:
    std::string id;
    std::string nombre;
    std::string contrasena;
public:
    usuarios();
    ~usuarios();
    bool loginUsuarios();
    void menuUsuarios();
    bool buscarUsuario(const std::string& user, const std::string& pass);
    std::string getNombre();
    void setNombre(const std::string& nombre);
    void registrarUsuario();
    void consultarUsuarios();
    void modificarUsuario();
    void eliminarUsuario();
};


#endif // USUARIOSLOGIS_H
