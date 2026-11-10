/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031be6b4; name: FUN_031be6b4
 */


void FUN_031be6b4(long *param_1,int param_2,long *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  short sVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  
  sVar5 = *(short *)(param_1[2] + (ulong)((uint)(param_2 * -0x61c8864f) >> 0x18) * 2);
  if (-1 < sVar5) {
    do {
      if (*(int *)(*param_1 + (long)sVar5 * 0x10 + 8) == param_2) {
        plVar7 = (long *)(*param_1 + (long)sVar5 * 0x10);
        uVar1 = *(ushort *)((long)plVar7 + 0xe);
        goto joined_r0x031be7ac;
      }
      sVar5 = *(short *)(param_1[1] + (long)sVar5 * 2);
    } while (-1 < sVar5);
  }
  plVar7 = param_1 + 4;
  uVar1 = *(ushort *)((long)param_1 + 0x2e);
joined_r0x031be7ac:
  if ((uVar1 >> 2 & 1) == 0) {
    uVar6 = (ulong)(uVar1 >> 3) & 1;
    plVar4 = plVar7;
    uVar3 = uVar1 >> 3 | 0xfffffffe;
    do {
      uVar8 = uVar3;
      plVar4 = (long *)(*param_1 + (long)*(short *)((long)plVar4 + 0xc) * 0x10);
      uVar3 = uVar8 + 1;
      uVar6 = uVar6 + 1;
    } while ((*(byte *)((long)plVar4 + 0xe) >> 2 & 1) == 0);
    uVar8 = uVar8 + 2;
    if ((*(uint *)((long)param_3 + 0xc) & 0x3fffffff) <= uVar8) {
      lVar2 = FUN_0315ac2c(PTR_PTR_0434a080,uVar6 & 0xffffffff,*param_3,(int)param_3[1]);
      *param_3 = lVar2;
    }
    if (((int)uVar8 < (int)param_3[1]) && ((int)param_3[1] <= (int)uVar6)) {
      uVar1 = *(ushort *)((long)plVar7 + 0xe);
    }
    else {
      *(int *)(param_3 + 1) = (int)uVar6;
      uVar1 = *(ushort *)((long)plVar7 + 0xe);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      *(int *)(*param_3 + uVar6 * 4 + -4) = (int)plVar7[1];
      uVar1 = *(ushort *)((long)plVar7 + 0xe);
      uVar8 = uVar3;
    }
    if ((uVar1 >> 2 & 1) == 0) {
      lVar2 = (long)(int)uVar8;
      do {
        if ((long)*(short *)((long)plVar7 + 0xc) == -1) {
          plVar7 = (long *)0x0;
        }
        else {
          plVar7 = (long *)(*param_1 + (long)*(short *)((long)plVar7 + 0xc) * 0x10);
        }
        if (lVar2 < (long)uVar6) {
          *(int *)(*param_3 + lVar2 * 4) = (int)plVar7[1];
        }
        lVar2 = lVar2 + -1;
      } while ((*(byte *)((long)plVar7 + 0xe) >> 2 & 1) == 0);
    }
  }
  else {
    if ((*(uint *)((long)param_3 + 0xc) & 0x3fffffff) == 0) {
      uVar3 = (*(uint *)((long)param_3 + 0xc) & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar3) {
        uVar3 = 0x3fffffff;
      }
      if (uVar3 < 2) {
        uVar3 = 1;
      }
      lVar2 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,4,*param_3,(int)param_3[1]);
      *param_3 = lVar2;
    }
    if ((int)param_3[1] != 1) {
      *(undefined4 *)(param_3 + 1) = 1;
    }
    *(int *)*param_3 = param_2;
  }
  return;
}


