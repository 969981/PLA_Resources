/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cad10; name: FUN_032cad10
 */


undefined1  [16] FUN_032cad10(long param_1)

{
  float __x;
  float fVar1;
  undefined1 auVar2 [16];
  
  __x = ABS((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20));
  if (1.0 <= __x) {
    fVar1 = 0.0;
    if (__x <= 0.0) {
      fVar1 = 3.1415927;
    }
  }
  else {
    fVar1 = acosf(__x);
  }
  auVar2._0_4_ = fVar1 + fVar1;
  auVar2._4_4_ = auVar2._0_4_;
  auVar2._8_8_ = 0;
  return auVar2;
}


