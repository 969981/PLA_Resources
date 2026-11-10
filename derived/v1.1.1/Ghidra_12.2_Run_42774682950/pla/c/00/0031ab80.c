/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031ab80; name: FUN_0031ab80
 */


void FUN_0031ab80(ulong param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte local_80 [16];
  undefined8 local_70;
  int local_68;
  
  puVar1 = PTR_LAB_04373088;
LAB_0031abb4:
  uVar8 = param_2 - 0x20;
  uVar6 = param_1;
LAB_0031abc4:
  while( true ) {
    param_1 = uVar6;
    lVar7 = param_2 - param_1;
    uVar6 = lVar7 >> 5;
    switch(uVar6) {
    case 0:
    case 1:
      return;
    case 2:
      uVar6 = FUN_0031b148(param_3,uVar8,param_1);
      if ((uVar6 & 1) == 0) {
        return;
      }
      local_68 = 0;
      FUN_0031a934(local_80,param_1);
                    /* try { // try from 0031aff0 to 0031b007 has its CatchHandler @ 0031b0b4 */
      FUN_0031a934(param_1,uVar8);
      FUN_0031a934(uVar8,local_80);
      if (local_68 != 9) {
        return;
      }
      if ((local_80[0] & 1) == 0) {
        return;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      return;
    case 3:
      FUN_0031b380(param_1,param_1 + 0x20,uVar8,param_3);
      return;
    case 4:
      FUN_0031b600(param_1,param_1 + 0x20,param_1 + 0x40,uVar8,param_3);
      return;
    case 5:
      FUN_0031b7e0(param_1,param_1 + 0x20,param_1 + 0x40,param_1 + 0x60,uVar8,param_3);
      return;
    }
    if (lVar7 < 0xe0) {
      FUN_0031ba40(param_1,param_2,param_3);
      return;
    }
    uVar5 = uVar6;
    if ((long)uVar6 < 0) {
      uVar5 = uVar6 + 1;
    }
    uVar5 = param_1 + (uVar5 & 0xffffffffffffffe) * 0x10;
    if (lVar7 < 0x7ce1) {
      iVar2 = FUN_0031b380(param_1,uVar5,uVar8,param_3);
    }
    else {
      uVar9 = uVar6 + 3;
      if (-1 < (long)uVar6) {
        uVar9 = uVar6;
      }
      lVar7 = (uVar9 & 0x1ffffffffffffffc) * 8;
      iVar2 = FUN_0031b7e0(param_1,param_1 + lVar7,uVar5,uVar5 + lVar7,uVar8,param_3);
    }
    uVar6 = FUN_0031b148(param_3,param_1,uVar5);
    if ((uVar6 & 1) != 0) break;
    uVar6 = param_2 - 0x40;
    while (uVar9 = uVar6, param_1 != uVar9) {
      uVar3 = FUN_0031b148(param_3,uVar9,uVar5);
      uVar6 = uVar9 - 0x20;
      if ((uVar3 & 1) != 0) goto code_r0x0031ac9c;
    }
    uVar5 = param_1 + 0x20;
    uVar6 = FUN_0031b148(param_3,param_1,uVar8);
    if ((uVar6 & 1) == 0) {
      if (uVar5 == uVar8) {
        return;
      }
      uVar5 = param_1 + 0x40;
      while( true ) {
        lVar7 = uVar5 - 0x20;
        uVar6 = FUN_0031b148(param_3,param_1,lVar7);
        if ((uVar6 & 1) != 0) break;
        uVar5 = uVar5 + 0x20;
        if (param_2 == uVar5) {
          return;
        }
      }
      local_68 = 0;
      FUN_0031a934(local_80,lVar7);
                    /* try { // try from 0031af4c to 0031af63 has its CatchHandler @ 0031b0c8 */
      FUN_0031a934(lVar7,uVar8);
      FUN_0031a934(uVar8,local_80);
      if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
        FUN_002e2ea0(puVar1,local_70);
      }
    }
    if (uVar5 == uVar8) {
      return;
    }
    uVar9 = uVar8;
    while( true ) {
      do {
        uVar6 = uVar5;
        uVar3 = FUN_0031b148(param_3,param_1,uVar6);
        uVar5 = uVar6 + 0x20;
      } while ((uVar3 & 1) == 0);
      do {
        uVar9 = uVar9 - 0x20;
        uVar3 = FUN_0031b148(param_3,param_1,uVar9);
      } while ((uVar3 & 1) != 0);
      if (uVar9 <= uVar6) break;
      local_68 = 0;
      FUN_0031a934(local_80,uVar6);
                    /* try { // try from 0031aecc to 0031aee3 has its CatchHandler @ 0031b104 */
      FUN_0031a934(uVar6,uVar9);
      FUN_0031a934(uVar9,local_80);
      if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
        FUN_002e2ea0(puVar1,local_70);
      }
    }
  }
  uVar6 = param_1 + 0x20;
  uVar9 = uVar8;
  if (uVar6 < uVar8) goto LAB_0031ad08;
  goto LAB_0031ac6c;
code_r0x0031ac9c:
  local_68 = 0;
  FUN_0031a934(local_80,param_1);
                    /* try { // try from 0031acb0 to 0031acc7 has its CatchHandler @ 0031b0f0 */
  FUN_0031a934(param_1,uVar9);
  FUN_0031a934(uVar9,local_80);
  if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
    FUN_002e2ea0(puVar1,local_70);
  }
  iVar2 = iVar2 + 1;
  uVar6 = param_1 + 0x20;
  if (uVar6 < uVar9) {
LAB_0031ad08:
    while( true ) {
      uVar3 = uVar6 - 0x20;
      do {
        uVar6 = uVar3;
        uVar3 = uVar6 + 0x20;
        uVar4 = FUN_0031b148(param_3,uVar3,uVar5);
      } while ((uVar4 & 1) != 0);
      uVar6 = uVar6 + 0x40;
      do {
        uVar9 = uVar9 - 0x20;
        uVar4 = FUN_0031b148(param_3,uVar9,uVar5);
      } while ((uVar4 & 1) == 0);
      if (uVar9 < uVar3) break;
      local_68 = 0;
      FUN_0031a934(local_80,uVar3);
                    /* try { // try from 0031ad58 to 0031ad6f has its CatchHandler @ 0031b118 */
      FUN_0031a934(uVar3,uVar9);
      FUN_0031a934(uVar9,local_80);
      if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
        FUN_002e2ea0(puVar1,local_70);
      }
      iVar2 = iVar2 + 1;
      uVar4 = uVar9;
      if (uVar5 != uVar3) {
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    }
    if (uVar3 == uVar5) goto LAB_0031ae00;
  }
  else {
LAB_0031ac6c:
    uVar3 = param_1 + 0x20;
    if (uVar3 == uVar5) goto LAB_0031ae00;
  }
  uVar6 = FUN_0031b148(param_3,uVar5,uVar3);
  if ((uVar6 & 1) != 0) {
    local_68 = 0;
    FUN_0031a934(local_80,uVar3);
                    /* try { // try from 0031adc4 to 0031addb has its CatchHandler @ 0031b0dc */
    FUN_0031a934(uVar3,uVar5);
    FUN_0031a934(uVar5,local_80);
    if ((local_68 == 9) && ((local_80[0] & 1) != 0)) {
      FUN_002e2ea0(puVar1,local_70);
    }
    iVar2 = iVar2 + 1;
  }
LAB_0031ae00:
  if (iVar2 == 0) {
    uVar5 = FUN_0031bba0(param_1,uVar3,param_3);
    uVar6 = FUN_0031bba0(uVar3 + 0x20,param_2,param_3);
    if ((uVar6 & 1) != 0) goto LAB_0031afa8;
    uVar6 = uVar3 + 0x20;
    if ((uVar5 & 1) != 0) goto LAB_0031abc4;
  }
  if ((long)(param_2 - uVar3) <= (long)(uVar3 - param_1)) {
    FUN_0031ab80(uVar3 + 0x20,param_2,param_3);
    param_2 = uVar3;
    goto LAB_0031abb4;
  }
  FUN_0031ab80(param_1,uVar3,param_3);
  uVar6 = uVar3 + 0x20;
  goto LAB_0031abc4;
LAB_0031afa8:
  param_2 = uVar3;
  if ((uVar5 & 1) != 0) {
    return;
  }
  goto LAB_0031abb4;
}


