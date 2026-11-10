/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eafc5c; name: FUN_02eafc5c
 */


void FUN_02eafc5c(float param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int local_38;
  float local_34;
  
  uVar5 = param_3 & 0xffffffff;
  local_38 = 0;
  local_34 = param_1;
  FUN_02eafd64(param_2,param_3,&local_34,&local_38);
  FUN_02eafe18(param_2,uVar5,&local_34,&local_38);
  if (local_38 == 4) {
    local_34 = local_34 - param_1;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x50);
    uVar6 = *(uint *)(param_2 + 0x54);
    if (uVar6 <= uVar3) {
      iVar1 = uVar6 + (uVar6 >> 1);
      if (uVar6 == 0) {
        iVar1 = 1;
      }
      uVar6 = iVar1 + uVar6;
      lVar4 = (*DAT_0442d148)(0,*(undefined8 *)(param_2 + 0x48),(ulong)uVar6 << 4);
      if (lVar4 == 0) goto LAB_02eafcbc;
      *(long *)(param_2 + 0x48) = lVar4;
      *(uint *)(param_2 + 0x54) = uVar6;
    }
    if (uVar3 < uVar6) {
      uVar6 = *(uint *)(param_2 + 0x50);
      *(uint *)(param_2 + 0x50) = uVar6 + 1;
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x48) + (ulong)uVar6 * 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        lVar4 = *(long *)(param_2 + 0x48) + (ulong)uVar6 * 0x10;
        *(undefined2 *)(puVar2 + 1) = 0;
        *puVar2 = 0;
        *(short *)(lVar4 + 8) = (short)uVar5;
        *(float *)(lVar4 + 0xc) = param_1;
      }
    }
  }
LAB_02eafcbc:
  (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8),uVar5,&local_34,4);
  return;
}


