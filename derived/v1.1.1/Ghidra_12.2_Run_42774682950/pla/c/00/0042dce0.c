/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042dce0; name: FUN_0042dce0
 */


undefined8 FUN_0042dce0(long *param_1,long *param_2)

{
  long lVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long *plVar8;
  
  if (*(long *)(*param_1 + 0x20) == 0) {
    uVar2 = 0x6a;
    uVar5 = 0x42;
    uVar6 = 0x85;
    goto LAB_0042dd34;
  }
  if (*param_1 != *param_2) {
    uVar2 = 0x6a;
    uVar5 = 0x65;
    uVar6 = 0x89;
    goto LAB_0042dd34;
  }
  if (param_1 == param_2) {
    return 1;
  }
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  if ((int)param_2[0x13] == 0) {
    lVar1 = 0;
LAB_0042dda0:
    param_1[0x14] = lVar1;
  }
  else if ((int)param_2[0x13] == 5) {
    lVar1 = FUN_0042f400(param_2[0x14]);
    goto LAB_0042dda0;
  }
  lVar3 = param_2[0x12];
  lVar1 = param_1[0x12];
  if (lVar3 == 0) {
    FUN_0040d960();
    param_1[0x12] = 0;
    plVar4 = (long *)param_2[1];
    plVar8 = (long *)param_1[1];
    if (plVar4 == (long *)0x0) goto LAB_0042de50;
LAB_0042ddd8:
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)FUN_0042df90(param_1);
      param_1[1] = (long)plVar8;
      if (plVar8 == (long *)0x0) {
        return 0;
      }
      plVar4 = (long *)param_2[1];
    }
    pcVar7 = *(code **)(*plVar8 + 0x68);
    if (pcVar7 == (code *)0x0) {
      uVar2 = 0x72;
      uVar5 = 0x42;
      uVar6 = 0x267;
      goto LAB_0042dd34;
    }
    if ((*plVar8 != *plVar4) ||
       ((((int)plVar4[1] != 0 && ((int)plVar8[1] != 0)) && ((int)plVar8[1] != (int)plVar4[1])))) {
      uVar2 = 0x72;
      uVar5 = 0x65;
      uVar6 = 0x26e;
      goto LAB_0042dd34;
    }
    if ((plVar8 != plVar4) && (uVar2 = (*pcVar7)(plVar8), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  else {
    if (lVar1 == 0) {
      lVar1 = FUN_0040d8e0();
      param_1[0x12] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
      lVar3 = param_2[0x12];
    }
    lVar1 = FUN_0040dc20(lVar1,lVar3);
    if (lVar1 == 0) {
      return 0;
    }
    plVar4 = (long *)param_2[1];
    plVar8 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) goto LAB_0042ddd8;
LAB_0042de50:
    if (plVar8 != (long *)0x0) {
      pcVar7 = *(code **)(*plVar8 + 0x60);
      if ((pcVar7 != (code *)0x0) || (pcVar7 = *(code **)(*plVar8 + 0x58), pcVar7 != (code *)0x0)) {
        (*pcVar7)(plVar8);
      }
      FUN_00400620(plVar8,0x30,"external/openssl/crypto/ec/ec_lib.c",0x261);
    }
    param_1[1] = 0;
  }
  if ((*(byte *)*param_2 >> 1 & 1) == 0) {
    lVar1 = FUN_0040c5d0(param_1[2],param_2[2]);
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = FUN_0040c5d0(param_1[3],param_2[3]);
    if (lVar1 == 0) {
      return 0;
    }
  }
  plVar8 = param_1 + 6;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  if (param_2[6] == 0) {
    FUN_00400420(*plVar8,"external/openssl/crypto/ec/ec_lib.c",0xe1);
    *plVar8 = 0;
    param_1[7] = 0;
  }
  else {
    FUN_00400420(*plVar8,"external/openssl/crypto/ec/ec_lib.c",0xd8);
    __dest = (void *)FUN_00400260(param_2[7],"external/openssl/crypto/ec/ec_lib.c",0xd9);
    *plVar8 = (long)__dest;
    if (__dest == (void *)0x0) {
      uVar2 = 0x6a;
      uVar5 = 0x41;
      uVar6 = 0xda;
LAB_0042dd34:
      FUN_004014b0(0x10,uVar2,uVar5,"external/openssl/crypto/ec/ec_lib.c",uVar6);
      return 0;
    }
    memcpy(__dest,(void *)param_2[6],param_2[7]);
    param_1[7] = param_2[7];
  }
                    /* WARNING: Could not recover jumptable at 0x0042df58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return uVar2;
}


