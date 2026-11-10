/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033980f0; name: FUN_033980f0
 */


void FUN_033980f0(long param_1,undefined8 *param_2,long *param_3,int param_4,int param_5,int param_6
                 )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long *plVar6;
  long local_78;
  long local_70;
  ulong local_68;
  
  local_78 = *param_3;
  local_70 = param_3[1];
  puVar4 = (undefined4 *)*param_2;
  uVar5 = param_3[2];
  local_68 = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_032e0c28(uVar5 & 0xfffffffffffffffe);
  }
  if (param_6 < 1) {
    if ((uVar5 & 1) != 0) {
      FUN_032e0c40(uVar5 & 0xfffffffffffffffe);
    }
  }
  else {
    do {
      iVar1 = (**(code **)(**(long **)(param_1 + 0x288) + 0x20))
                        (*(long **)(param_1 + 0x288),&local_78);
      if (iVar1 != 0 && *(char *)(param_1 + 0x2a8) != '\0') {
        plVar6 = *(long **)(param_1 + 0x2a0);
        uVar2 = FUN_03398860(param_2[1]);
        uVar3 = FUN_03398860(local_70);
        (**(code **)(*plVar6 + 0x10))(plVar6,puVar4,uVar2,uVar3);
      }
      *puVar4 = 0;
      (**(code **)(**(long **)(param_1 + 0x2a0) + 0x18))
                (*(long **)(param_1 + 0x2a0),puVar4,iVar1,local_70);
      puVar4 = (undefined4 *)((long)puVar4 + (long)param_4);
      uVar5 = local_68 & 0xfffffffffffffffe;
      local_78 = local_78 + param_5;
      if ((local_68 & 1) != 0) {
        FUN_032e0c40(uVar5);
      }
      param_6 = param_6 + -1;
      local_68 = uVar5;
    } while (param_6 != 0);
  }
  return;
}


