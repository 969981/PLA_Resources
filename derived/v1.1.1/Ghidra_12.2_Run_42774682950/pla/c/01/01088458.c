/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01088458; name: FUN_01088458
 */


float FUN_01088458(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float __y;
  
  lVar1 = *(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68);
  if (lVar1 != 0) {
    __y = (float)(ulong)(lVar1 >> 5);
    if (*(char *)(param_2 + 0xa0) == '\0') {
      if (param_1 <= __y) {
        __y = param_1;
      }
      if (0.0 <= param_1) {
        return __y;
      }
    }
    else {
      fVar2 = fmodf(param_1,__y);
      if (fVar2 < 0.0) {
        fVar2 = fVar2 + (float)(ulong)(*(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68) >> 5);
      }
      if (fVar2 <= __y + -1.1920929e-07) {
        return fVar2;
      }
    }
  }
  return 0.0;
}


