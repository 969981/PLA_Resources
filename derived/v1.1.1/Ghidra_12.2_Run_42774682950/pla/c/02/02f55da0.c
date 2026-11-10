/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f55da0; name: FUN_02f55da0
 */


void FUN_02f55da0(long *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long local_60;
  undefined1 local_58;
  
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)((long)param_1 + 0x54) != -1) {
      param_3 = *(int *)((long)param_1 + 0x54);
    }
  }
  FUN_02f55f54(param_1,param_2,param_3);
  plVar5 = (long *)param_1[0xf];
  if (plVar5 != (long *)0x0) {
    do {
      while( true ) {
        lVar1 = *plVar5;
        lVar2 = plVar5[1];
        uVar3 = *(uint *)(lVar1 + 4);
        local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar1 + 0x18));
        fVar6 = (float)FUN_02e74568((float)((param_3 + param_2) - (int)plVar5[2]),lVar1 + 8,
                                    &local_60);
        *(undefined4 *)(lVar1 + 0x18) = (undefined4)local_60;
        if (1 < uVar3 - 3) break;
        local_60 = lVar2 + (ulong)uVar3;
LAB_02f55e78:
        local_58 = 0x5e;
        FUN_02ecd80c(fVar6,lVar2,&local_60);
LAB_02f55e88:
        plVar5 = (long *)plVar5[3];
joined_r0x02f55e8c:
        if (plVar5 == (long *)0x0) goto LAB_02f55df8;
      }
      if (uVar3 == 0) {
        fVar6 = fVar6 + 1.0;
        local_60 = lVar2;
        goto LAB_02f55e78;
      }
      if (uVar3 != 1) {
        if (uVar3 != 2) goto LAB_02f55e88;
        fVar7 = *(float *)(lVar2 + 0x324);
        *(float *)(lVar2 + 0x324) = fVar6;
        *(float *)(lVar2 + 0x84) = (fVar6 - fVar7) + *(float *)(lVar2 + 0x84);
        plVar5 = (long *)plVar5[3];
        goto joined_r0x02f55e8c;
      }
      fVar7 = *(float *)(lVar2 + 800);
      *(float *)(lVar2 + 800) = fVar6;
      *(float *)(lVar2 + 0x80) = (fVar6 - fVar7) + *(float *)(lVar2 + 0x80);
      plVar5 = (long *)plVar5[3];
    } while (plVar5 != (long *)0x0);
  }
LAB_02f55df8:
  iVar4 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar4;
  if (iVar4 == 0) {
    if (param_1[2] == 0) {
      FUN_02f37eb4(param_1);
    }
    else {
      FUN_02f3b8c0(param_1[2],param_1);
      param_1[2] = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1);
    (*DAT_0442d150)(0,param_1);
  }
  return;
}


