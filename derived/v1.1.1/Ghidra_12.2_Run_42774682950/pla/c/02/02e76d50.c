/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76d50; name: FUN_02e76d50
 */


undefined8 FUN_02e76d50(float param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = 0x1f;
  if ((-96.3 <= param_1) && (param_1 <= 0.0)) {
    if (param_2 <= DAT_042a7030) {
      DAT_042a7030 = param_2;
      DAT_042ac988 = exp2f(param_1 * 0.1660964);
      if (param_1 * 0.05 < -37.0) {
        fVar3 = 0.0;
      }
      else {
        uVar2 = (uint)(param_1 * 1393317.6 + 1.0653532e+09);
        fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
        fVar3 = (fVar3 * (fVar3 * 0.32518977 + 0.020805772) + 0.65304345) *
                (float)(uVar2 & 0xff800000);
      }
      if (DAT_042ac988 <= fVar3) {
        DAT_042ac988 = fVar3;
      }
      DAT_042ac98c = param_1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


