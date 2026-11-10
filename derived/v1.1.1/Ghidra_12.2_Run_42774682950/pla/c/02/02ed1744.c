/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed1744; name: FUN_02ed1744
 */


void FUN_02ed1744(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_48 = param_1 + 0x30;
  local_38 = 2;
  lStack_40 = param_1;
  FUN_02ec512c(DAT_0440a180,&local_48,param_2,param_3);
  plVar1 = *(long **)(param_1 + 0x80);
  if (((param_4 & 1) == 0) || (plVar2 = *(long **)(param_1 + 0x88), plVar2 == (long *)0x0)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3,param_4 & 1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
  }
  else {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x150))(plVar1,param_2,param_3,0);
      plVar2 = *(long **)(param_1 + 0x88);
    }
    (**(code **)(*plVar2 + 0x150))(plVar2,param_2,param_3,0);
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
  }
  if ((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 1) != 0)) {
    lVar4 = (ulong)*(uint *)(puVar3 + 1) << 3;
    puVar3 = (undefined8 *)*puVar3;
    do {
      FUN_02eb5cb0(*puVar3,param_2,param_3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}


