/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f5270; name: FUN_007f5270
 */


void FUN_007f5270(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  (**(code **)(*param_1 + 0x360))();
  puVar3 = (undefined8 *)param_1[0x22e];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_0081a800(puVar3);
    param_1[0x22e] = 0;
  }
  puVar3 = (undefined8 *)param_1[0x22f];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    FUN_0081a800(puVar3);
    param_1[0x22f] = 0;
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*param_1 + 0x248))(param_1);
    param_1[0x43] = 0;
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1);
    param_1[0x37] = 0;
  }
  if (param_1[0x32] != 0) {
    (**(code **)(*param_1 + 0x318))(param_1);
    param_1[0x32] = 0;
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*param_1 + 0x318))(param_1);
    param_1[0x31] = 0;
  }
  if (param_1[0x22b] != 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1);
    param_1[0x22b] = 0;
  }
  if (param_1[0x22c] != 0) {
    (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x22c] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*param_1 + 600))(param_1);
    param_1[0x30] = 0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
    param_1[0x2f] = 0;
  }
  if (param_1[0x2d] != 0) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    param_1[0x2d] = 0;
  }
  if (param_1[0x2c] != 0) {
    (**(code **)(*param_1 + 0x288))(param_1);
    param_1[0x2c] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1);
    param_1[0x2b] = 0;
  }
  if (param_1[0x2a] != 0) {
    (**(code **)(*param_1 + 0x2a8))(param_1);
    param_1[0x2a] = 0;
  }
  if (param_1[0x29] != 0) {
    (**(code **)(*param_1 + 0x278))(param_1);
    param_1[0x29] = 0;
  }
  if (param_1[0x28] != 0) {
    (**(code **)(*param_1 + 0x268))(param_1);
    param_1[0x28] = 0;
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*param_1 + 0x298))(param_1);
    param_1[0x27] = 0;
  }
  lVar4 = param_1[0x26];
  if (lVar4 != 0) {
    FUN_0081a840(lVar4);
    FUN_0081a800(lVar4);
    param_1[0x26] = 0;
  }
  if (param_1[0x4f] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x4f] = 0;
  }
  if (param_1[0x4e] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x4e] = 0;
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x25] = 0;
  }
  if (param_1[0x24] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x24] = 0;
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*param_1 + 0x1f8))(param_1);
    param_1[0x23] = 0;
  }
  plVar5 = (long *)param_1[0x11];
  if (plVar5 != (long *)0x0) {
    uVar2 = (ulong)*(ushort *)((long)param_1 + 0x114e);
    if (*(ushort *)((long)param_1 + 0x114e) != 0) {
      lVar4 = 0;
      lVar1 = *plVar5;
      do {
        if (lVar1 == 0) {
          if (uVar2 <= lVar4 + 1U) goto LAB_007f5594;
        }
        else {
          (**(code **)(*param_1 + 0x238))(param_1);
          *(undefined8 *)(param_1[0x11] + lVar4 * 8) = 0;
          plVar5 = (long *)param_1[0x11];
          uVar2 = (ulong)*(ushort *)((long)param_1 + 0x114e);
          if ((ulong)*(ushort *)((long)param_1 + 0x114e) <= lVar4 + 1U) goto LAB_007f5594;
        }
        lVar4 = lVar4 + 1;
        lVar1 = plVar5[lVar4];
      } while( true );
    }
    goto LAB_007f5598;
  }
LAB_007f55ac:
  plVar5 = (long *)param_1[0x12];
  if (plVar5 != (long *)0x0) {
    uVar2 = (ulong)*(ushort *)((long)param_1 + 0x114e);
    if (*(ushort *)((long)param_1 + 0x114e) != 0) {
      lVar4 = 0;
      lVar1 = *plVar5;
      do {
        if (lVar1 == 0) {
          if (uVar2 <= lVar4 + 1U) goto LAB_007f5608;
        }
        else {
          (**(code **)(*param_1 + 0x238))(param_1);
          *(undefined8 *)(param_1[0x12] + lVar4 * 8) = 0;
          plVar5 = (long *)param_1[0x12];
          uVar2 = (ulong)*(ushort *)((long)param_1 + 0x114e);
          if ((ulong)*(ushort *)((long)param_1 + 0x114e) <= lVar4 + 1U) goto LAB_007f5608;
        }
        lVar4 = lVar4 + 1;
        lVar1 = plVar5[lVar4];
      } while( true );
    }
LAB_007f560c:
    FUN_0081a840(plVar5);
    FUN_0081a800(plVar5);
LAB_007f561c:
    param_1[0x12] = 0;
  }
  return;
LAB_007f5594:
  if (plVar5 != (long *)0x0) {
LAB_007f5598:
    FUN_0081a840(plVar5);
    FUN_0081a800(plVar5);
  }
  param_1[0x11] = 0;
  goto LAB_007f55ac;
LAB_007f5608:
  if (plVar5 != (long *)0x0) goto LAB_007f560c;
  goto LAB_007f561c;
}


