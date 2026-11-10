/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e75160; name: FUN_02e75160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e75160(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  MutexType *__s;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  if (DAT_0440a120 == (MutexType *)0x0) {
    __s = (MutexType *)(*DAT_0442d138)(0x10,0x310);
    if (__s == (MutexType *)0x0) {
      DAT_0440a120 = (MutexType *)0x0;
      uVar6 = 0x34;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
    memset(__s,0,0x310);
    nn::os::InitializeMutex(__s,true,0);
    *(undefined4 *)(__s + 0x30) = 0;
    *(undefined8 *)(__s + 0x20) = 0;
    *(undefined8 *)(__s + 0x28) = 0;
    nn::os::InitializeMutex(__s + 0x38,true,0);
    *(undefined4 *)(__s + 0x68) = 0;
    *(undefined8 *)(__s + 0x58) = 0;
    *(undefined8 *)(__s + 0x60) = 0;
    nn::os::InitializeMutex(__s + 0x70,true,0);
    *(undefined4 *)(__s + 0xa0) = 0;
    *(undefined8 *)(__s + 0x90) = 0;
    *(undefined8 *)(__s + 0x98) = 0;
    nn::os::InitializeMutex(__s + 0xa8,true,0);
    *(undefined4 *)(__s + 0xd8) = 0;
    *(undefined8 *)(__s + 200) = 0;
    *(undefined8 *)(__s + 0xd0) = 0;
    nn::os::InitializeMutex(__s + 0xe0,true,0);
    *(undefined4 *)(__s + 0x110) = 0;
    *(undefined8 *)(__s + 0x100) = 0;
    *(undefined8 *)(__s + 0x108) = 0;
    nn::os::InitializeMutex(__s + 0x118,true,0);
    *(undefined4 *)(__s + 0x148) = 0;
    *(undefined8 *)(__s + 0x138) = 0;
    *(undefined8 *)(__s + 0x140) = 0;
    nn::os::InitializeMutex(__s + 0x150,true,0);
    *(undefined4 *)(__s + 0x180) = 0;
    *(undefined8 *)(__s + 0x170) = 0;
    *(undefined8 *)(__s + 0x178) = 0;
    nn::os::InitializeMutex(__s + 0x188,true,0);
    *(undefined4 *)(__s + 0x1b8) = 0;
    *(undefined8 *)(__s + 0x1a8) = 0;
    *(undefined8 *)(__s + 0x1b0) = 0;
    nn::os::InitializeMutex(__s + 0x1c0,true,0);
    *(undefined4 *)(__s + 0x1f0) = 0;
    *(undefined8 *)(__s + 0x1e0) = 0;
    *(undefined8 *)(__s + 0x1e8) = 0;
    nn::os::InitializeMutex(__s + 0x1f8,true,0);
    *(undefined4 *)(__s + 0x228) = 0;
    *(undefined8 *)(__s + 0x220) = 0;
    *(undefined8 *)(__s + 0x218) = 0;
    nn::os::InitializeMutex(__s + 0x230,true,0);
    *(undefined4 *)(__s + 0x260) = 0;
    *(undefined8 *)(__s + 600) = 0;
    *(undefined8 *)(__s + 0x250) = 0;
    nn::os::InitializeMutex(__s + 0x268,true,0);
    *(undefined4 *)(__s + 0x298) = 0;
    *(undefined8 *)(__s + 0x290) = 0;
    *(undefined8 *)(__s + 0x288) = 0;
    nn::os::InitializeMutex(__s + 0x2a0,true,0);
    *(undefined4 *)(__s + 0x2d0) = 0;
    *(undefined8 *)(__s + 0x2c8) = 0;
    *(undefined8 *)(__s + 0x2c0) = 0;
    nn::os::InitializeMutex(__s + 0x2d8,true,0);
    *(undefined4 *)(__s + 0x308) = 0;
    *(undefined8 *)(__s + 0x300) = 0;
    *(undefined8 *)(__s + 0x2f8) = 0;
    DAT_0440a120 = __s;
    uVar4 = FUN_02e7c8b4(__s);
    if ((uVar4 & 1) == 0) {
      return 0x34;
    }
  }
  if (DAT_0440a160 == 0) {
    lVar5 = (*DAT_0442d138)(0x10,0xc0);
    if (lVar5 == 0) {
      DAT_0440a160 = 0;
      uVar6 = 0x34;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
    FUN_02edf778();
    DAT_0440a160 = lVar5;
    uVar6 = FUN_02edf7b4(lVar5);
    uVar2 = _DAT_0440a1a8;
    if ((int)uVar6 != 1) goto joined_r0x02e75738;
  }
  if (DAT_0440a168 == (undefined8 *)0x0) {
    DAT_0440a168 = (undefined8 *)(*DAT_0442d138)(0x10,0x98);
    if (DAT_0440a168 != (undefined8 *)0x0) {
      DAT_0440a168[0x11] = 0;
      DAT_0440a168[0x12] = 0;
      *DAT_0440a168 = 0;
      DAT_0440a168[0xf] = 0;
      DAT_0440a168[0x10] = 0;
      DAT_0440a168[0xd] = 0;
      DAT_0440a168[0xe] = 0;
      DAT_0440a168[0xb] = 0;
      DAT_0440a168[0xc] = 0;
      DAT_0440a168[9] = 0;
      DAT_0440a168[10] = 0;
      DAT_0440a168[7] = 0;
      DAT_0440a168[8] = 0;
      DAT_0440a168[5] = 0;
      DAT_0440a168[6] = 0;
      DAT_0440a168[3] = 0;
      DAT_0440a168[4] = 0;
      DAT_0440a168[1] = 0;
      DAT_0440a168[2] = 0;
      *(undefined4 *)(DAT_0440a168 + 3) = 1;
      DAT_0440a168[4] = 0;
      DAT_0440a168[5] = 0;
      *(undefined4 *)(DAT_0440a168 + 6) = 1;
      DAT_0440a168[7] = 0;
      DAT_0440a168[8] = 0;
      *(undefined4 *)(DAT_0440a168 + 9) = 1;
      DAT_0440a168[10] = 0;
      DAT_0440a168[0xb] = 0;
      *(undefined4 *)(DAT_0440a168 + 0xc) = 1;
      DAT_0440a168[0xd] = 0;
      DAT_0440a168[0xe] = 0;
      *(undefined4 *)(DAT_0440a168 + 0xf) = 1;
      DAT_0440a168[0x10] = 0;
      DAT_0440a168[0x11] = 0;
      *(undefined4 *)(DAT_0440a168 + 0x12) = 1;
      uVar6 = FUN_02eace90();
      uVar2 = _DAT_0440a1a8;
      if ((int)uVar6 != 1) goto joined_r0x02e75738;
      goto LAB_02e753e4;
    }
    DAT_0440a168 = (undefined8 *)0x0;
  }
  else {
LAB_02e753e4:
    if (DAT_0440a148 == (long *)0x0) {
      if (DAT_0440a1c8._4_1_ == '\0') {
        DAT_0440a2f8 = (undefined1 *)0x0;
        plVar7 = (long *)(*DAT_0442d138)(0x10,0x150);
        if (plVar7 == (long *)0x0) {
          DAT_0440a148 = (long *)0x0;
          uVar6 = 0x34;
          uVar2 = _DAT_0440a1a8;
          goto joined_r0x02e75738;
        }
        FUN_02e8ecf4();
        DAT_0440a148 = plVar7;
        if (plVar7 != (long *)0x0) goto LAB_02e75434;
      }
      else {
        DAT_0440a2f8 = &LAB_02e77430;
        plVar7 = (long *)(*DAT_0442d138)(0x10,0x1c8);
        if (plVar7 != (long *)0x0) {
          FUN_02f0dd08(plVar7);
          DAT_0440a148 = plVar7;
LAB_02e75434:
          uVar6 = (**(code **)(*DAT_0440a148 + 0x10))(DAT_0440a148);
          uVar2 = _DAT_0440a1a8;
          if ((int)uVar6 != 1) goto joined_r0x02e75738;
          goto LAB_02e7544c;
        }
      }
      DAT_0440a148 = plVar7;
      uVar6 = 0x34;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
LAB_02e7544c:
    if (DAT_0440a170 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(*DAT_0442d138)(0x10,0xa0);
      if (puVar8 == (undefined8 *)0x0) {
        DAT_0440a170 = (undefined8 *)0x0;
        uVar6 = 0x34;
        uVar2 = _DAT_0440a1a8;
        goto joined_r0x02e75738;
      }
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0xd] = 0;
      *puVar8 = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[0xc] = 0;
      nn::os::InitializeMutex((MutexType *)(puVar8 + 3),true,0);
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      FUN_02ea5454(puVar8 + 0xc);
      DAT_0440a170 = puVar8;
      uVar6 = FUN_02edcb34(puVar8);
      uVar2 = _DAT_0440a1a8;
      if ((int)uVar6 != 1) goto joined_r0x02e75738;
    }
    if (DAT_0440a178 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)(*DAT_0442d138)(0x10,0x48);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[4] = 0;
        nn::os::InitializeMutex((MutexType *)(puVar8 + 4),true,0);
        DAT_0440a178 = puVar8;
        uVar6 = FUN_02ede1b4(puVar8);
        uVar2 = _DAT_0440a1a8;
        if ((int)uVar6 != 1) goto joined_r0x02e75738;
        goto LAB_02e75530;
      }
      DAT_0440a178 = (undefined8 *)0x0;
joined_r0x02e75738:
      uVar6 = 0x34;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
LAB_02e75530:
    if (DAT_0440a140 == 0) {
      lVar5 = (*DAT_0442d138)(0x10,0x48);
      if (lVar5 == 0) {
        DAT_0440a140 = 0;
        goto joined_r0x02e75748;
      }
      FUN_02ef1bd0();
      DAT_0440a140 = lVar5;
      uVar6 = FUN_02ef1c28(lVar5);
      uVar2 = _DAT_0440a1a8;
      if ((int)uVar6 != 1) goto joined_r0x02e75738;
    }
    if (DAT_0440a180 == 0) {
      lVar5 = (*DAT_0442d138)(0x10,0x20);
      if (lVar5 != 0) {
        FUN_02ec4ec4();
        DAT_0440a180 = lVar5;
        uVar6 = FUN_02ec4ed8(lVar5);
        uVar2 = _DAT_0440a1a8;
        if ((int)uVar6 != 1) goto joined_r0x02e75738;
        goto LAB_02e755a8;
      }
      DAT_0440a180 = 0;
joined_r0x02e75758:
      uVar6 = 0x34;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
LAB_02e755a8:
    if (DAT_0440a150 == (undefined8 *)0x0) {
      DAT_0440a150 = (undefined8 *)(*DAT_0442d138)(0x10,0x20);
      if (DAT_0440a150 == (undefined8 *)0x0) {
        DAT_0440a150 = (undefined8 *)0x0;
        goto joined_r0x02e75758;
      }
      DAT_0440a150[2] = 0;
      DAT_0440a150[3] = 0;
      *DAT_0440a150 = 0;
      DAT_0440a150[1] = 0;
    }
    if (DAT_0440a158 == 0) {
      lVar5 = (*DAT_0442d138)(0x10,0x18);
      if (lVar5 == 0) {
        DAT_0440a158 = 0;
        goto joined_r0x02e75748;
      }
      FUN_02edc344();
      DAT_0440a158 = lVar5;
      uVar6 = FUN_02edc354(lVar5,(undefined4)DAT_0440a1a0);
      uVar2 = _DAT_0440a1a8;
      if ((int)uVar6 != 1) goto joined_r0x02e75738;
    }
    if (DAT_0440a130 == 0) {
      lVar5 = (*DAT_0442d138)(0x10,0x1c8);
      if (lVar5 == 0) {
        DAT_0440a130 = 0;
        goto joined_r0x02e75738;
      }
      FUN_02f0c200();
      DAT_0440a130 = lVar5;
      uVar6 = FUN_02f0c220(lVar5);
      uVar2 = _DAT_0440a1a8;
      if ((int)uVar6 != 1) goto joined_r0x02e75738;
    }
    if (DAT_0440a138 != 0) {
      uVar6 = 1;
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
    lVar5 = (*DAT_0442d138)(0x10,0xa8);
    if (lVar5 != 0) {
      FUN_02f05898();
      DAT_0440a138 = lVar5;
      uVar6 = FUN_02f058f4(lVar5);
      uVar2 = _DAT_0440a1a8;
      goto joined_r0x02e75738;
    }
    DAT_0440a138 = 0;
  }
joined_r0x02e75748:
  uVar6 = 0x34;
  uVar2 = _DAT_0440a1a8;
joined_r0x02e75738:
  _DAT_0440a1a8 = uVar2;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = CONCAT44(DAT_0440a1a0._4_4_,(undefined4)DAT_0440a1a0);
    *param_1 = DAT_0440a198;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    uVar3 = DAT_0440a1b8;
    uVar1 = DAT_0440a1b0;
    uVar2 = CONCAT44(DAT_0440a1c8._4_4_,(undefined4)DAT_0440a1c8);
    param_1[5] = DAT_0440a1c0;
    param_1[6] = uVar2;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
    uVar3 = DAT_0440a1e8;
    uVar1 = DAT_0440a1d8;
    uVar2 = DAT_0440a1d0;
    param_1[9] = DAT_0440a1e0;
    param_1[10] = uVar3;
    param_1[7] = uVar2;
    param_1[8] = uVar1;
    uVar3 = _DAT_0440a200;
    uVar1 = DAT_0440a1f8;
    uVar2 = DAT_0440a1f0;
    *(undefined1 *)(param_1 + 0xe) = (undefined1)DAT_0440a208;
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar3;
    param_1[0xb] = uVar2;
  }
  return uVar6;
}


