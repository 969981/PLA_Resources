/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085d92c; name: FUN_0085d92c
 */


void FUN_0085d92c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_108 [23];
  
  if ((*(long *)(param_1 + 0x13a8) != 0) && (*(char *)(*(long *)PTR_DAT_04377550 + 0x472) != '\0'))
  {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1378));
    puVar4 = *(ushort **)(param_1 + 0x1308);
    if ((puVar4 != (ushort *)0x0) && (lVar2 = FUN_0085e854(puVar4), lVar2 != 0)) {
      local_108[0] = 0;
      local_108[1] = 0;
      local_108[0x16] = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[4] = 0;
      local_108[5] = 0;
      local_108[6] = 0;
      local_108[7] = 0;
      local_108[8] = 0;
      local_108[9] = 0;
      local_108[10] = 0;
      local_108[0xb] = 0;
      local_108[0xc] = 0;
      local_108[0xd] = 0;
      local_108[0xe] = 0;
      local_108[0xf] = 0;
      local_108[0x10] = 0;
      local_108[0x11] = 0;
      local_108[0x12] = 0;
      local_108[0x13] = 0;
      local_108[0x14] = 0;
      local_108[0x15] = 0;
      if (*puVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar7 = 0;
        uVar6 = 0;
        lVar2 = FUN_0085e8d4(puVar4,0);
        while( true ) {
          if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x10) != 0xd)) &&
              (lVar9 = *(long *)(lVar2 + 8), lVar9 != 0)) &&
             (lVar3 = FUN_0085e854(puVar4), lVar9 != *(long *)(lVar3 + 8))) {
            local_108[uVar6] = *(undefined8 *)(lVar2 + 8);
            uVar6 = (ulong)((int)uVar6 + 1);
          }
          uVar7 = uVar7 + 1;
          if (*puVar4 <= uVar7) break;
          lVar2 = FUN_0085e8d4(puVar4,uVar7);
        }
      }
      plVar8 = *(long **)(param_1 + 0x13a8);
      lVar2 = FUN_0085e854(puVar4);
      uVar5 = *(undefined8 *)(lVar2 + 8);
      uVar1 = FUN_008473a0(param_1);
      (**(code **)(*plVar8 + 0x60))(plVar8,uVar5,uVar1,local_108,uVar6);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1378));
  }
  return;
}


