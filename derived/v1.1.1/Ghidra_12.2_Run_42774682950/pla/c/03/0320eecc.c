/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320eecc; name: FUN_0320eecc
 */


void FUN_0320eecc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_70;
  undefined4 local_68;
  long local_60;
  long lStack_58;
  
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x38d490) == 0) {
    lVar5 = FUN_0333d16c(0,1);
    *(long *)(lVar8 + 0x38d490) = lVar5;
    lVar8 = *(long *)(lVar5 + 0x10);
  }
  else {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38d490) + 0x10);
  }
  if (lVar8 != 0) {
    puVar6 = *(undefined8 **)(lVar8 + 8);
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = "TthkaiPathRequestsTasks::FireEvents";
      uVar3 = nn::os::GetSystemTick();
      puVar6[1] = uVar3;
    }
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(int *)(lVar5 + 0x50) != 0) {
    lVar7 = *(long *)(lVar5 + 0x20);
    lVar9 = (long)*(int *)(lVar5 + 0x50) << 4;
    puVar6 = *(undefined8 **)(lVar5 + 0x48);
    do {
      iVar2 = *(int *)(puVar6 + 1);
      if (iVar2 != 1) {
        if (iVar2 == 0) {
          FUN_0320f0d0(lVar7 + 0x30,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),*puVar6);
        }
        else if (iVar2 == 2) {
          FUN_0320f18c(lVar7 + 0x38,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x20),*puVar6);
        }
        else if (iVar2 != 3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      }
      puVar6 = puVar6 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    lVar5 = *(long *)(param_1 + 0x28);
  }
  if (*(int *)(lVar5 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x60);
    puVar1 = puVar6 + (long)*(int *)(lVar5 + 0x68) * 4;
    while( true ) {
      local_70 = *puVar6;
      local_68 = *(undefined4 *)(puVar6 + 1);
      local_60 = puVar6[2];
      lStack_58 = local_60 + (long)*(int *)(puVar6 + 3) * 4;
      FUN_0320f248(*(long *)(lVar5 + 0x20) + 0x80,*(long *)(lVar5 + 0x20),&local_70);
      puVar6 = puVar6 + 4;
      if (puVar6 == puVar1) break;
      lVar5 = *(long *)(param_1 + 0x28);
    }
  }
  if (lVar8 != 0) {
    puVar6 = *(undefined8 **)(lVar8 + 8);
    uVar4 = (long)puVar6 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= *(ulong *)(lVar8 + 0x10)) &&
       (*(ulong *)(lVar8 + 8) = uVar4, puVar6 != (undefined8 *)0x0)) {
      *puVar6 = &DAT_0390f40e;
      uVar3 = nn::os::GetSystemTick();
      puVar6[1] = uVar3;
    }
  }
  return;
}


