/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305dc7c; name: FUN_0305dc7c
 */


void FUN_0305dc7c(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long local_48;
  undefined8 *local_40;
  uint *local_38;
  uint local_30;
  uint local_2c;
  
  local_38 = *(uint **)(*(long *)(param_1 + 0x550) + (long)*(int *)(param_1 + 0x558) * 8 + -8);
  local_48 = param_1 + 0x540;
  local_30 = *local_38 >> 0x10;
  local_2c = *local_38 & 0xffff;
  *(uint *)(param_1 + 0x548) = *(int *)(param_1 + 0x548) - local_2c;
  local_40 = param_3;
  FUN_03048640(*(undefined8 *)(param_2 + 0x508),param_2,param_4,&local_48);
  puVar3 = local_40;
  if (local_2c == 0) {
    piVar4 = (int *)(local_48 + 0x18);
    iVar1 = *piVar4;
    if (1 < iVar1) {
      lVar5 = *(long *)(*(long *)(local_48 + 0x10) + (long)(iVar1 + -2) * 8);
      iVar2 = *(int *)(local_40 + 0xb);
      lVar6 = local_40[1];
      *(undefined8 *)(lVar6 + (long)iVar2 * 8) =
           *(undefined8 *)(*(long *)(local_48 + 0x10) + (long)(iVar1 + -1) * 8);
      *(int *)(local_40 + 0xb) = iVar2 + 1;
      if (*(int *)((long)local_40 + 0x5c) <= iVar2 + 1) {
        (**(code **)(*(long *)*local_40 + 0x28))((long *)*local_40,lVar6 + (long)(iVar2 + -5) * 8,6)
        ;
        *(int *)(puVar3 + 0xb) = iVar2 + -5;
      }
      *(undefined8 *)(lVar5 + 8) = 0;
      local_2c = 0xffffffff;
      goto LAB_0305dd28;
    }
  }
  local_38[2] = 0;
  local_38[3] = 0;
  *local_38 = *local_38 & 0xffff0000 | local_2c & 0xffff;
  *local_38 = *local_38 & 0xffff | local_30 << 0x10;
  piVar4 = (int *)(local_48 + 8);
LAB_0305dd28:
  *piVar4 = *piVar4 + local_2c;
  return;
}


