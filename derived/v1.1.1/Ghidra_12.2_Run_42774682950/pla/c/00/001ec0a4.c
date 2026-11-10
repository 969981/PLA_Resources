/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ec0a4; name: FUN_001ec0a4
 */


undefined8 FUN_001ec0a4(ulong *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[2] & param_2 & *param_1;
  uVar1 = (uint)uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 6 & 1) == 0) {
      if ((uVar1 >> 1 & 1) == 0) {
        if ((uVar1 >> 3 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar2 & 1) == 0) {
              uVar3 = 0;
              param_1[1] = 0x40000000;
            }
            else {
              uVar3 = 1;
              param_1[1] = 1;
            }
            goto LAB_001ec108;
          }
          uVar2 = 0x20;
        }
        else {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 0x40;
    }
  }
  else {
    uVar2 = 4;
  }
  param_1[1] = uVar2;
  uVar3 = 1;
LAB_001ec108:
  param_1[2] = 0;
  return uVar3;
}


