/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b6e2c; name: FUN_010b6e2c
 */


void FUN_010b6e2c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long local_60;
  long lStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  long *local_38;
  
  uVar2 = FUN_010b6f48();
  if ((uVar2 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x3a8);
    plVar4 = *(long **)(lVar6 + 0x20);
    uVar2 = *(ulong *)(lVar6 + 0x28);
    local_38 = plVar4 + uVar2 * 3;
    if ((uVar2 != 0) && (*plVar4 != param_3)) {
      lVar5 = uVar2 * 0x18;
      plVar3 = plVar4;
      do {
        lVar5 = lVar5 + -0x18;
        if (lVar5 == 0) goto LAB_010b6f00;
        plVar4 = plVar3 + 3;
        plVar1 = plVar3 + 3;
        plVar3 = plVar4;
      } while (*plVar1 != param_3);
    }
    if (local_38 == plVar4) {
LAB_010b6f00:
      local_60 = param_3;
      lStack_58 = param_4;
      local_50 = param_6;
      uStack_4c = param_7;
      if (uVar2 < *(ulong *)(lVar6 + 0x30)) {
        FUN_010b97c8(lVar6,local_38,&local_60);
        *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + 1;
      }
      else {
        FUN_010b973c(auStack_48,lVar6,&local_38,1,&local_60);
      }
    }
    else {
      plVar4[1] = param_4;
      plVar4[2] = CONCAT44(param_7,param_6);
      *plVar4 = param_3;
    }
  }
  return;
}


