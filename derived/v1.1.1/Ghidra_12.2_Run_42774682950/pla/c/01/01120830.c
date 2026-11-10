/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01120830; name: FUN_01120830
 */


undefined8 FUN_01120830(uint *param_1,uint *param_2,uint *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_4;
  uVar2 = FUN_0111ea04((short)*param_2,(short)*param_1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x53a) = 1;
  }
  lVar4 = *param_4;
  uVar3 = FUN_0111ea04((short)*param_3,(short)*param_2);
  if ((uVar3 & 1) == 0) {
    *(undefined1 *)(lVar4 + 0x53a) = 1;
  }
  if ((uVar2 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    lVar4 = *param_4;
    uVar2 = FUN_0111ea04((short)*param_2,(short)*param_1);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x53a) = 1;
      return 1;
    }
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_1;
    if ((uVar3 & 1) != 0) {
      *param_1 = *param_3;
      *param_3 = uVar1;
      return 1;
    }
    *param_1 = *param_2;
    *param_2 = uVar1;
    lVar4 = *param_4;
    uVar2 = FUN_0111ea04((short)*param_3,uVar1 & 0xffff);
    if ((uVar2 & 1) == 0) {
      *(undefined1 *)(lVar4 + 0x53a) = 1;
      return 1;
    }
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
  }
  return 2;
}


