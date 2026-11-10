/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040def0; name: FUN_0040def0
 */


void FUN_0040def0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  FUN_00400420(param_1[4],"external/openssl/crypto/bn/bn_ctx.c",0xfb);
  plVar2 = (long *)*param_1;
  param_1[4] = 0;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    while( true ) {
      if (lVar1 != 0) {
        FUN_0040c140(plVar2);
      }
      if (plVar2[3] != 0) {
        FUN_0040c140();
      }
      if (plVar2[6] != 0) {
        FUN_0040c140();
      }
      if (plVar2[9] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0xc] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0xf] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x12] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x15] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x18] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x1b] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x1e] != 0) {
        FUN_0040c140();
      }
      if (plVar2[0x21] != 0) {
        FUN_0040c140(plVar2 + 0x21);
      }
      if (plVar2[0x24] != 0) {
        FUN_0040c140(plVar2 + 0x24);
      }
      if (plVar2[0x27] != 0) {
        FUN_0040c140(plVar2 + 0x27);
      }
      if (plVar2[0x2a] != 0) {
        FUN_0040c140(plVar2 + 0x2a);
      }
      if (plVar2[0x2d] != 0) {
        FUN_0040c140(plVar2 + 0x2d);
      }
      param_1[1] = *(long *)(*param_1 + 0x188);
      FUN_00400420(*param_1,"external/openssl/crypto/bn/bn_ctx.c",0x12f);
      plVar2 = (long *)param_1[1];
      *param_1 = (long)plVar2;
      if (plVar2 == (long *)0x0) break;
      lVar1 = *plVar2;
    }
  }
  FUN_00400420(param_1,"external/openssl/crypto/bn/bn_ctx.c",0xb2);
  return;
}


