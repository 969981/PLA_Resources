/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb1e0; name: FUN_031bb1e0
 */


void FUN_031bb1e0(long param_1,int param_2,int param_3,undefined8 *param_4,byte *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_5 = 0;
  if (param_2 < *(int *)(param_1 + 0x24)) {
    if ((-1 < param_2) &&
       ((*(byte *)(*(long *)(param_1 + 0x40) + (long)param_2 * 0x80 + 0x10) >> 4 & 1) != 0)) {
      bVar3 = FUN_031bb094();
      *param_5 = bVar3 & 1;
      return;
    }
    lVar1 = *(long *)(param_1 + 0x40) + (long)param_2 * 0x80;
    puVar2 = (undefined8 *)(lVar1 + 0x40);
    if (param_3 != 1) {
      puVar2 = (undefined8 *)(lVar1 + 0x30);
    }
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
  }
  param_4[1] = uVar5;
  *param_4 = uVar4;
  return;
}


