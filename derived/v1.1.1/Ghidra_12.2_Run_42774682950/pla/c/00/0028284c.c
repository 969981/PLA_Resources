/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028284c; name: FUN_0028284c
 */


void FUN_0028284c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04372fd0 + 0x10);
  if (0 < *(int *)((long)param_1 + 0x6c)) {
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_00265dd8(param_1[0x14] + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x270;
    } while (lVar6 < *(int *)((long)param_1 + 0x6c));
  }
  iVar3 = *(int *)((long)param_1 + 100);
  if (iVar3 < 1) {
LAB_00282908:
    FUN_0026e89c(param_1 + 0x299,param_1[7]);
    plVar2 = (long *)FUN_00271720();
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1[0x2d6]);
    plVar2 = (long *)FUN_00271720();
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1[0x2d7]);
    plVar2 = param_1 + 8;
    FUN_0028d3b4(param_1 + 0x263,param_1[7],plVar2);
    if (0 < (int)param_1[0xe]) {
      lVar6 = 0;
      lVar4 = 0x828;
      puVar1 = PTR_DAT_04372fd8 + 0x10;
      do {
        *(undefined **)(param_1[0x15] + lVar4) = puVar1;
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x840;
      } while (lVar6 < (int)param_1[0xe]);
    }
    if (param_1[0x118] != 0) {
      FUN_00269468();
    }
    if (0 < (int)param_1[1]) {
      lVar6 = 0;
      lVar4 = 0x110;
      do {
        FUN_0028c9ec(param_1[2] + lVar4,param_1[7]);
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + 0x9e8;
      } while (lVar6 < (int)param_1[1]);
    }
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
    (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],param_1[0x241]);
    FUN_00276f60(param_1[7]);
    FUN_00277328();
    FUN_002718b0();
    FUN_0028d05c(param_1[7],plVar2);
    FUN_00271630(0);
    FUN_00271710(0);
    FUN_0027b884(plVar2);
    FUN_0027ea54(plVar2);
    FUN_0028a648(plVar2);
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2dc));
    nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2d8));
    param_1[0x299] = (long)(PTR_DAT_04372e68 + 0x10);
    FUN_00878494(param_1 + 0x2a3);
    FUN_008772bc(param_1 + 0x29a);
    FUN_00878494(param_1 + 0x26e);
    FUN_008772bc(param_1 + 0x263);
    return;
  }
  uVar5 = 0;
  lVar6 = *(long *)param_1[0x13];
  do {
    if (lVar6 == 0) {
      if ((long)iVar3 <= (long)(uVar5 + 1)) goto LAB_00282908;
    }
    else {
      FUN_00277e20(lVar6,0);
      FUN_00271770("vfx system deleted the registered binary. resource id : %d.",uVar5 & 0xffffffff)
      ;
      iVar3 = *(int *)((long)param_1 + 100);
      if ((long)iVar3 <= (long)(uVar5 + 1)) goto LAB_00282908;
    }
    uVar5 = uVar5 + 1;
    lVar6 = *(long *)(param_1[0x13] + uVar5 * 8);
  } while( true );
}


