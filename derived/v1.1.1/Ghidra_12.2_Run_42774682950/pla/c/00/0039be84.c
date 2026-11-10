/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039be84; name: FUN_0039be84
 */


undefined8 FUN_0039be84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  undefined ***local_108;
  long *local_100;
  byte local_f8;
  undefined8 local_e8;
  int local_e0;
  undefined **local_c8;
  long *local_c0;
  byte local_b8;
  undefined8 local_a8;
  int local_a0;
  undefined1 auStack_98 [16];
  long *local_88;
  long *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined *puStack_68;
  
  lVar5 = (**(code **)(*param_1 + 0x98))();
  uVar6 = FUN_0039bcc0(param_1);
  uVar11 = (ulong)*(uint *)(lVar5 + 0x68);
  if (0 < (int)*(uint *)(lVar5 + 0x68)) {
    lVar12 = 0;
    do {
      if ((*(int *)(*(long *)(lVar5 + 0x28) + lVar12 + 0x3c) == 2) &&
         (uVar7 = FUN_00386684(uVar6,param_1), (uVar7 & 1) == 0)) {
        return 0;
      }
      lVar12 = lVar12 + 0x98;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
                    /* try { // try from 0039bf14 to 0039bf23 has its CatchHandler @ 0039c2d0 */
  FUN_00387324(uVar6,param_1,&local_88);
  puVar3 = PTR_DAT_04373ab0;
  puVar2 = PTR_LAB_04373aa0;
  puVar1 = PTR_LAB_04373a98;
  if (local_80 == local_88) {
LAB_0039c240:
    uVar6 = 1;
joined_r0x0039c288:
    if (local_88 != (long *)0x0) {
      local_80 = local_88;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    return uVar6;
  }
  uVar11 = 0;
  lVar5 = *local_88;
  puVar8 = *(ulong **)(lVar5 + 0x30);
  do {
    if ((puVar8 != (ulong *)0x0) &&
       (puStack_68 = puVar1, local_70 = lVar5, *puVar8 != 0xffffffffffffffff)) {
      local_c0 = &local_70;
      local_c8 = &puStack_68;
                    /* try { // try from 0039bfc4 to 0039c02b has its CatchHandler @ 0039c2d8 */
      local_108 = &local_c8;
      std::__call_once(puVar8,&local_108,(_func_void_void_ptr *)puVar2);
    }
    uVar10 = *(uint *)(lVar5 + 0x38);
    if (*(int *)(puVar3 + (ulong)uVar10 * 4) == 10) {
      puVar8 = *(ulong **)(lVar5 + 0x30);
      if (puVar8 != (ulong *)0x0) {
        puStack_68 = puVar1;
        local_70 = lVar5;
        if (*puVar8 != 0xffffffffffffffff) {
          local_c0 = &local_70;
          local_c8 = &puStack_68;
          local_108 = &local_c8;
          std::__call_once(puVar8,&local_108,(_func_void_void_ptr *)puVar2);
        }
        uVar10 = *(uint *)(lVar5 + 0x38);
      }
      if ((uVar10 == 0xb) && (uVar7 = FUN_00344344(lVar5), (uVar7 & 1) != 0)) {
                    /* try { // try from 0039c030 to 0039c077 has its CatchHandler @ 0039c2cc */
        lVar12 = FUN_00342dac(lVar5);
        lVar12 = *(long *)(lVar12 + 0x28);
        puVar8 = *(ulong **)(lVar12 + 200);
        if (puVar8 != (ulong *)0x0) {
          local_70 = lVar12 + 0x98;
          puStack_68 = puVar1;
          if (*puVar8 != 0xffffffffffffffff) {
            local_c0 = &local_70;
            local_c8 = &puStack_68;
            local_108 = &local_c8;
            std::__call_once(puVar8,&local_108,(_func_void_void_ptr *)puVar2);
          }
        }
        if (*(int *)(puVar3 + (ulong)*(uint *)(lVar12 + 0xd0) * 4) == 10) {
                    /* try { // try from 0039c088 to 0039c09f has its CatchHandler @ 0039c2c8 */
          plVar9 = (long *)FUN_0038e920(uVar6,param_1,lVar5);
          uVar7 = FUN_00395ca8();
          if ((uVar7 & 1) == 0) goto LAB_0039c138;
                    /* try { // try from 0039c0a4 to 0039c0b3 has its CatchHandler @ 0039c298 */
          FUN_00319b40(&local_c8,param_1,lVar5);
                    /* try { // try from 0039c0b4 to 0039c0c3 has its CatchHandler @ 0039c290 */
          FUN_00319b40(&local_108,param_1,lVar5);
                    /* try { // try from 0039c0cc to 0039c0eb has its CatchHandler @ 0039c2c4 */
          (**(code **)(*plVar9 + 0x30))(plVar9,&local_c8);
          (**(code **)(*plVar9 + 0x38))(plVar9,&local_108);
                    /* try { // try from 0039c0f8 to 0039c133 has its CatchHandler @ 0039c2dc */
          while (uVar7 = (**(code **)(*local_c0 + 0x28))(local_c0,&local_c8,&local_108),
                (uVar7 & 1) == 0) {
            plVar9 = (long *)FUN_0031cbdc(auStack_98);
            uVar7 = (**(code **)(*plVar9 + 0x30))();
            if ((uVar7 & 1) == 0) {
              iVar4 = 1;
              goto LAB_0039c1cc;
            }
            (**(code **)(*local_c0 + 0x90))(local_c0,&local_c8);
          }
          iVar4 = 7;
LAB_0039c1cc:
                    /* try { // try from 0039c1d8 to 0039c1df has its CatchHandler @ 0039c2b0 */
          (**(code **)(*local_100 + 0x80))(local_100,&local_108);
          if ((local_e0 == 9) && ((local_f8 & 1) != 0)) {
            FUN_002e2ea0(PTR_LAB_04373088,local_e8);
          }
                    /* try { // try from 0039c210 to 0039c217 has its CatchHandler @ 0039c29c */
          (**(code **)(*local_c0 + 0x80))(local_c0,&local_c8);
          if ((local_a0 == 9) && ((local_b8 & 1) != 0)) {
            FUN_002e2ea0(PTR_LAB_04373088,local_a8);
          }
          if (iVar4 == 7) goto LAB_0039bf80;
LAB_0039c280:
          uVar6 = 0;
          goto joined_r0x0039c288;
        }
      }
      else {
LAB_0039c138:
        if (*(int *)(lVar5 + 0x3c) == 3) {
                    /* try { // try from 0039c144 to 0039c153 has its CatchHandler @ 0039c2d4 */
          iVar4 = FUN_00386cec(uVar6,param_1,lVar5);
          if (0 < iVar4) {
            iVar13 = 0;
            do {
                    /* try { // try from 0039c164 to 0039c183 has its CatchHandler @ 0039c364 */
              plVar9 = (long *)FUN_0038cfc0(uVar6,param_1,lVar5,iVar13);
              uVar7 = (**(code **)(*plVar9 + 0x30))();
              if ((uVar7 & 1) == 0) goto LAB_0039c280;
              iVar13 = iVar13 + 1;
            } while (iVar4 != iVar13);
          }
        }
        else {
                    /* try { // try from 0039c198 to 0039c1b7 has its CatchHandler @ 0039c2d8 */
          plVar9 = (long *)FUN_0038c150(uVar6,param_1,lVar5,0);
          uVar7 = (**(code **)(*plVar9 + 0x30))();
          if ((uVar7 & 1) == 0) goto LAB_0039c280;
        }
      }
    }
LAB_0039bf80:
    uVar11 = uVar11 + 1;
    if ((ulong)((long)local_80 - (long)local_88 >> 3) <= uVar11) goto LAB_0039c240;
    lVar5 = local_88[uVar11];
    puVar8 = *(ulong **)(lVar5 + 0x30);
  } while( true );
}


