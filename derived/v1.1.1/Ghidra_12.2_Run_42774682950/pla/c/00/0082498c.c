/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082498c; name: FUN_0082498c
 */


void FUN_0082498c(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,long param_6,uint param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  ThreadType *pTVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  FUN_0081e7d0();
  puVar1 = PTR_DAT_04377c78;
  param_1[4] = (long)(PTR_DAT_043773d0 + 0x10);
  param_1[5] = param_2[1];
  *param_1 = (long)(puVar1 + 0x10);
  FUN_008251d8(param_1 + 6);
  *(uint *)(param_1 + 0x10) = param_7;
  plVar7 = param_1 + 0x11;
  *plVar7 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0081ede0(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x17) = param_5;
  param_1[0x18] = param_6;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_4;
  param_1[0x13] = (long)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FUN_008251e4(param_1 + 6,param_8,param_3);
  uVar8 = (ulong)param_7;
  lVar2 = FUN_0081a7a0(uVar8,param_3,0x1000);
  if ((param_7 != 0) && (lVar2 != 0)) {
    uVar4 = uVar8 & 3;
    if (uVar8 - 1 < 3) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar2 + lVar5) = 0;
        lVar5 = lVar5 + 4;
      } while (uVar8 - uVar4 != lVar5);
    }
    if ((param_7 & 3) != 0) {
      puVar6 = (undefined1 *)(lVar2 + lVar5);
      do {
        uVar4 = uVar4 - 1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (uVar4 != 0);
    }
  }
  param_1[0x1b] = lVar2;
  pTVar3 = (ThreadType *)FUN_0081a750(0x1c0,param_3);
  if (pTVar3 != (ThreadType *)0x0) {
    memset(pTVar3,0,0x1c0);
  }
  param_1[0x1a] = (long)pTVar3;
  nn::os::CreateThread
            (pTVar3,(_func_void_void_ptr *)PTR_LAB_04377c80,param_1,(void *)param_1[0x1b],
             (long)(int)param_7,(int)param_1[0x1d]);
  pTVar3 = (ThreadType *)param_1[0x1a];
  (**(code **)(*param_2 + 0x18))(param_2);
  nn::os::SetThreadName(pTVar3,(char *)param_2[1]);
  lVar2 = *(long *)PTR_DAT_043773f8;
  if (lVar2 == 0) {
    return;
  }
  FUN_0082481c(lVar2 + 0x40);
  lVar5 = param_1[0x14];
  if (lVar5 != 0) {
    param_1[0x14] = 0;
    FUN_0081aac8(plVar7);
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  param_1[0x14] = lVar2 + 0x28;
  FUN_0081aab0(lVar2 + 0x28,plVar7);
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
  FUN_00824824(lVar2 + 0x40);
  return;
}


