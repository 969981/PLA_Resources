/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329dad8; name: FUN_0329dad8
 */


void FUN_0329dad8(long param_1,int param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if ((0 < param_4) && (param_4 = param_4 * 4, 0 < param_4)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)param_2 * 0x40);
    do {
      param_4 = param_4 + -1;
      uVar1 = *(undefined4 *)(param_3 + 1);
      uVar2 = *(undefined4 *)((long)param_3 + 0xc);
      *puVar3 = *param_3;
      *(undefined4 *)(puVar3 + 1) = uVar1;
      *(undefined4 *)((long)puVar3 + 0xc) = uVar2;
      param_3 = param_3 + 2;
      puVar3 = puVar3 + 2;
    } while (param_4 != 0);
  }
  return;
}


