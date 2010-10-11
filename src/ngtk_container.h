#ifndef NGTK_CONTAINER_H_
#define NGTK_CONTAINER_H_

#include <v8.h>
#include <gtk/gtk.h>

#include "ngtk.h"
#include "ngtk_widget.h"

namespace ngtk {

class Container : public Widget {
public:
  static void Initialize (v8::Handle<v8::FunctionTemplate> constructor_template);

private:
  static v8::Handle<v8::Value> Add    (const v8::Arguments &args);
  static v8::Handle<v8::Value> Remove (const v8::Arguments &args);
};

} // namespace ngtk

#endif
