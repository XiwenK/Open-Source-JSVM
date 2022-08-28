/* File generated automatically by the QuickJS compiler. */

#include "quickjs-libc.h"

const uint32_t qjsc_gc_size = 60;

const uint8_t qjsc_gc[60] = {
 0x02, 0x03, 0x02, 0x61, 0x02, 0x62, 0x12, 0x74,
 0x69, 0x6e, 0x2f, 0x67, 0x63, 0x2e, 0x6a, 0x73,
 0x0e, 0x00, 0x06, 0x00, 0x9e, 0x01, 0x00, 0x02,
 0x00, 0x02, 0x00, 0x00, 0x0d, 0x02, 0xa0, 0x01,
 0x00, 0x00, 0x00, 0xbe, 0x03, 0x03, 0x00, 0x40,
 0x61, 0x01, 0x00, 0x0b, 0xb7, 0x4c, 0xe0, 0x00,
 0x00, 0x00, 0xcb, 0xc6, 0x28, 0xc2, 0x03, 0x01,
 0x03, 0x03, 0x12, 0x2c,
};

int main(int argc, char **argv)
{
  JSRuntime *rt;
  JSContext *ctx;
  rt = JS_NewRuntime();
  ctx = JS_NewContextRaw(rt);
  JS_SetModuleLoaderFunc(rt, NULL, js_module_loader, NULL);
  JS_AddIntrinsicBaseObjects(ctx);
  JS_AddIntrinsicDate(ctx);
  JS_AddIntrinsicEval(ctx);
  JS_AddIntrinsicStringNormalize(ctx);
  JS_AddIntrinsicRegExp(ctx);
  JS_AddIntrinsicJSON(ctx);
  JS_AddIntrinsicProxy(ctx);
  JS_AddIntrinsicMapSet(ctx);
  JS_AddIntrinsicTypedArrays(ctx);
  JS_AddIntrinsicPromise(ctx);
  JS_AddIntrinsicBigInt(ctx);
  js_std_add_helpers(ctx, argc, argv);
  js_std_eval_binary(ctx, qjsc_gc, qjsc_gc_size, 0);
  js_std_loop(ctx);
  JS_FreeContext(ctx);
  JS_FreeRuntime(rt);
  return 0;
}
