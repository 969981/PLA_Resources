/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002458c8; name: FUN_002458c8
 */


void FUN_002458c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *__s;
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  byte local_68 [4];
  undefined4 local_64;
  
  puVar13 = param_1 + 2;
  __s = param_1 + 1;
  *param_1 = param_3;
  FUN_0024bbbc(puVar13);
  FUN_0024bbbc(param_1 + 4);
  FUN_0024bbbc(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  bVar1 = *(byte *)(param_2 + 0x228) & 4;
  *(byte *)(param_1 + 0x45) = bVar1;
  bVar1 = *(byte *)(param_2 + 0x228) & 8 | bVar1;
  *(byte *)(param_1 + 0x45) = bVar1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_2 + 0x228) & 2 | bVar1;
  memset(__s,0,0x210);
  lVar7 = FUN_002424d0(*param_1,3);
  lVar8 = FUN_002424d0(*param_1,4);
  uVar9 = FUN_00233e78(param_6);
  if (lVar7 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *__s = *(undefined8 *)(param_2 + 8);
    param_1[2] = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    param_1[5] = *(undefined8 *)(param_2 + 0x28);
    param_1[6] = uVar4;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    param_1[9] = *(undefined8 *)(param_2 + 0x48);
    param_1[10] = uVar4;
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    if ((*(byte *)(lVar7 + 0x14) & 1) != 0) {
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x28) + 0x48))();
      if (((*PTR_DAT_04372b90 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04372b90), iVar6 != 0)) {
        if (((*PTR_DAT_04372a58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_04372a60 = 0;
          __cxa_guard_release(PTR_DAT_04372a58);
        }
        *(undefined **)PTR_DAT_04372b98 = PTR_DAT_04372a60;
        __cxa_guard_release(PTR_DAT_04372b90);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_04372b98) goto LAB_00245a24;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_00245a24:
      lVar12 = FUN_00235dfc(uVar9,0,puVar10);
      FUN_0024bc10(param_1 + 4,*(undefined8 *)(lVar12 + 8));
    }
    if ((*(uint *)(lVar7 + 0xc) & 1) == 0) {
      if ((*(uint *)(lVar7 + 0xc) >> 1 & 1) != 0) {
        puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
        if (((*PTR_DAT_04372ca8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04372ca8), iVar6 != 0)) {
          if (((*PTR_DAT_04372a58 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
            *(undefined8 *)PTR_DAT_04372a60 = 0;
            __cxa_guard_release(PTR_DAT_04372a58);
          }
          *(undefined **)PTR_DAT_04372ca0 = PTR_DAT_04372a60;
          __cxa_guard_release(PTR_DAT_04372ca8);
        }
        if (puVar10 != (undefined8 *)0x0) {
          for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
              plVar11 = (long *)*plVar11) {
            if (plVar11 == (long *)PTR_DAT_04372ca0) goto LAB_00245aa4;
          }
          puVar10 = (undefined8 *)0x0;
        }
LAB_00245aa4:
        lVar12 = FUN_00235f90(uVar9,param_4,param_5,puVar10);
        FUN_0024bc10(puVar13,*(undefined8 *)(lVar12 + 8));
        *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 1;
      }
    }
    else {
      local_68[0] = 0;
      puVar10 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x18) + 0x48))();
      if (((*PTR_DAT_04372b90 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04372b90), iVar6 != 0)) {
        if (((*PTR_DAT_04372a58 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
          *(undefined8 *)PTR_DAT_04372a60 = 0;
          __cxa_guard_release(PTR_DAT_04372a58);
        }
        *(undefined **)PTR_DAT_04372b98 = PTR_DAT_04372a60;
        __cxa_guard_release(PTR_DAT_04372b90);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (plVar11 = (long *)(**(code **)*puVar10)(puVar10); plVar11 != (long *)0x0;
            plVar11 = (long *)*plVar11) {
          if (plVar11 == (long *)PTR_DAT_04372b98) goto LAB_00245b2c;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_00245b2c:
      lVar12 = FUN_00235dfc(uVar9,local_68,puVar10);
      *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xfe | local_68[0];
      FUN_0024bc10(puVar13,*(undefined8 *)(lVar12 + 8));
    }
    param_1[9] = 0;
    *(undefined1 *)((long)param_1 + 0x54) = 0;
  }
  if (lVar8 == 0) {
    if (lVar7 == 0) {
      iVar6 = *(int *)(param_1 + 0x44);
    }
    else {
      local_64 = 1;
      lVar7 = FUN_00235844(param_5,param_4,0x4b53414d,1,&local_64);
      param_1[0x43] = lVar7;
      iVar6 = FUN_002506a0(*(undefined8 *)(lVar7 + 0x38),0x4b53414d,1,&local_64);
      *(int *)(param_1 + 0x44) = iVar6;
    }
    lVar7 = *(long *)(param_1[0x43] + 0x30);
    iVar5 = FUN_00230144();
    *(undefined4 *)((long)param_1 + 0x224) = *(undefined4 *)(lVar7 + (long)(iVar5 * iVar6) * 4);
  }
  else {
    memcpy(param_1 + 0xb,(void *)(param_2 + 0x58),0x1c0);
    puVar13 = (undefined8 *)(**(code **)(**(long **)(param_2 + 0x68) + 0x48))();
    if (((*PTR_DAT_04372b90 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04372b90), iVar6 != 0)) {
      if (((*PTR_DAT_04372a58 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04372a58), iVar6 != 0)) {
        *(undefined8 *)PTR_DAT_04372a60 = 0;
        __cxa_guard_release(PTR_DAT_04372a58);
      }
      *(undefined **)PTR_DAT_04372b98 = PTR_DAT_04372a60;
      __cxa_guard_release(PTR_DAT_04372b90);
    }
    if (puVar13 != (undefined8 *)0x0) {
      for (plVar11 = (long *)(**(code **)*puVar13)(puVar13); plVar11 != (long *)0x0;
          plVar11 = (long *)*plVar11) {
        if (plVar11 == (long *)PTR_DAT_04372b98) goto LAB_00245bd4;
      }
      puVar13 = (undefined8 *)0x0;
    }
LAB_00245bd4:
    lVar12 = FUN_00235dfc(uVar9,0,puVar13);
    FUN_0024bc10(param_1 + 0xc,*(undefined8 *)(lVar12 + 8));
    param_1[0xe] = *(undefined8 *)(lVar12 + 0x20);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_00245804(param_1,param_4,param_5,lVar7,lVar8);
  }
  *__s = 0;
  param_1[0xb] = 0;
  return;
}


