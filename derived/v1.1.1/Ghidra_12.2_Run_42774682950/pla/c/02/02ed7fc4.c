/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed7fc4; name: FUN_02ed7fc4
 */


undefined8 * FUN_02ed7fc4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)0x0;
  if (param_2 == 0) {
    FUN_02ef3758(DAT_0440a140,param_1);
    puVar10 = *(undefined8 **)(param_1 + 0x58);
    if (puVar10 == (undefined8 *)0x0) {
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x24);
      }
      puVar10 = (undefined8 *)(*DAT_0442d138)(4,0x28);
      if (puVar10 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar10 + 4) = uVar9;
        *puVar10 = &PTR_FUN_042ab250;
        puVar10[1] = param_1;
        puVar10[2] = 0;
        puVar10[3] = 0;
      }
      *(undefined8 **)(param_1 + 0x58) = puVar10;
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x60);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)(*DAT_0442d138)(4,0x10);
      if (plVar4 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
        return (undefined8 *)0x0;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(long **)(param_1 + 0x60) = plVar4;
    }
    plVar6 = (long *)*plVar4;
    uVar2 = *(uint *)(plVar4 + 1);
    if ((uVar2 == 0) || (*plVar6 == param_2)) {
      plVar4 = plVar6;
    }
    else {
      lVar7 = (ulong)uVar2 * 0x10;
      plVar8 = plVar6;
      do {
        lVar7 = lVar7 + -0x10;
        if (lVar7 == 0) goto LAB_02ed80c0;
        plVar4 = plVar8 + 2;
        plVar1 = plVar8 + 2;
        plVar8 = plVar4;
      } while (*plVar1 != param_2);
    }
    if (plVar4 == plVar6 + (ulong)uVar2 * 2) {
LAB_02ed80c0:
      if (*(long *)(param_1 + 0x68) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x24);
      }
      puVar5 = (undefined8 *)(*DAT_0442d138)(4,0x28);
      puVar10 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar5 + 4) = uVar9;
        *puVar5 = &PTR_FUN_042ab250;
        puVar5[1] = param_1;
        puVar5[2] = param_2;
        puVar5[3] = 0;
        local_38 = puVar5;
        lVar7 = FUN_02ed81ac(*(undefined8 *)(param_1 + 0x60),param_2,&local_38);
        if (lVar7 != 0) {
          lVar7 = FUN_02ed8240(param_2);
          if ((lVar7 != 0) && (iVar3 = FUN_02eefc18(lVar7,param_1), iVar3 == 1)) {
            return puVar5;
          }
          FUN_02ed840c(*(undefined8 *)(param_1 + 0x60),param_2);
        }
        FUN_02ef41c0(puVar5);
        (*DAT_0442d150)(4,puVar5);
        puVar10 = (undefined8 *)0x0;
      }
    }
    else {
      puVar10 = (undefined8 *)plVar4[1];
    }
  }
  return puVar10;
}


