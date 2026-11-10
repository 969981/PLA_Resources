/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dc3888; name: FUN_00dc3888
 */


void FUN_00dc3888(int *param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  int local_24;
  
  iVar3 = param_1[10];
  if (7 < iVar3) {
    iVar3 = *param_1;
  }
  param_1[0x10] = 0;
  switch(iVar3) {
  case 2:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78740);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    lVar4 = *plVar1;
    piVar2 = (int *)&DAT_03a78744;
    goto LAB_00dc397c;
  case 3:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78748);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a7874c);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    iVar3 = 2;
    goto LAB_00dc39a0;
  case 4:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78750);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78754);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    iVar3 = 3;
    goto LAB_00dc39a0;
  case 5:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    local_24 = 0x3a6bedfb;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&local_24);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    local_24 = 0x3a5ed28a;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    piVar2 = &local_24;
    pcVar5 = *(code **)(*plVar1 + 0x10);
    break;
  case 6:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,param_1 + 0xb);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    piVar2 = param_1 + 0xc;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    pcVar5 = *(code **)(*plVar1 + 0x10);
    break;
  case 7:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78760);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    lVar4 = *plVar1;
    piVar2 = (int *)&DAT_03a78764;
LAB_00dc397c:
    pcVar5 = *(code **)(lVar4 + 0x10);
    break;
  default:
    local_50 = 0x4aa9ba3dccea94ea;
    pcStack_48 = "3DBufferWidthScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a78758);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x66e7a756352d0d9f;
    pcStack_48 = "3DBufferHeightScale";
    local_40 = 0x1f;
    local_38 = (long *)0x0;
    plVar1 = (long *)(**(code **)(*(long *)(DAT_043ef560 + 0x58) + 0x28))();
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_50,&DAT_03a7875c);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    return;
  }
  (*pcVar5)(plVar1,&local_50,piVar2);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  iVar3 = 1;
LAB_00dc39a0:
  param_1[0xd] = iVar3;
  return;
}


