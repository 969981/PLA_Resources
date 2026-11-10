/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f38320; name: FUN_02f38320
 */


void FUN_02f38320(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 unaff_x21;
  undefined4 unaff_w23;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_68;
  long local_60;
  char local_58 [4];
  undefined4 local_54;
  undefined8 local_48;
  
  lVar5 = DAT_0442c008;
  local_60 = 0;
  for (local_68 = DAT_0442c040; (local_68 != 0 && (local_68 + 8 != param_1));
      local_68 = *(long *)local_68) {
    local_60 = local_68;
  }
  if ((*(byte *)(local_68 + 0x10) & 1) != 0) {
    *(byte *)(local_68 + 0x10) = *(byte *)(local_68 + 0x10) & 0xfd;
    FUN_02f382cc();
    return;
  }
  uVar1 = *(undefined4 *)(local_68 + 8);
  if (DAT_0442c008 == 0) goto LAB_02f38534;
  if ((*(byte *)(DAT_0442c008 + 0x5a) & 0x11) == 1) {
    local_58[0] = '\0';
    lVar3 = FUN_02f3e2a0(*(undefined8 *)(DAT_0442c008 + 0x60),uVar1,local_58,&local_54,&local_48);
    if (local_58[0] == '\0') goto LAB_02f383bc;
    lVar6 = *(long *)(lVar5 + 0x70);
    unaff_x21 = local_48;
    unaff_w23 = local_54;
  }
  else {
LAB_02f383bc:
    lVar3 = 0;
    lVar6 = *(long *)(lVar5 + 0x70);
    lVar5 = 0;
  }
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x5a) & 0x11) == 1) {
      local_58[0] = '\0';
      lVar4 = FUN_02f3e2a0(*(undefined8 *)(lVar6 + 0x60),uVar1,local_58,&local_54,&local_48);
      if ((local_58[0] == '\0') || ((lVar5 != 0 && (lVar3 <= lVar4)))) goto LAB_02f38400;
      lVar7 = *(long *)(lVar6 + 0x70);
      lVar3 = lVar4;
      lVar5 = lVar6;
      unaff_w23 = local_54;
      unaff_x21 = local_48;
    }
    else {
LAB_02f38400:
      lVar7 = *(long *)(lVar6 + 0x70);
    }
    if (lVar7 != 0) {
      if ((*(byte *)(lVar7 + 0x5a) & 0x11) != 1) goto LAB_02f384c8;
      local_58[0] = '\0';
      lVar6 = FUN_02f3e2a0(*(undefined8 *)(lVar7 + 0x60),uVar1,local_58,&local_54,&local_48);
      do {
        if ((local_58[0] != '\0') && ((lVar5 == 0 || (lVar6 < lVar3)))) {
          unaff_x21 = local_48;
          lVar3 = lVar6;
          lVar5 = lVar7;
          unaff_w23 = local_54;
        }
LAB_02f384c8:
        do {
          lVar7 = *(long *)(lVar7 + 0x70);
          if (lVar7 == 0) goto LAB_02f38508;
        } while ((*(byte *)(lVar7 + 0x5a) & 0x11) != 1);
        local_58[0] = '\0';
        lVar6 = FUN_02f3e2a0(*(undefined8 *)(lVar7 + 0x60),uVar1,local_58,&local_54,&local_48);
      } while( true );
    }
  }
LAB_02f38508:
  if (((long)(ulong)DAT_042ab268 < lVar3) &&
     (iVar2 = FUN_02f3e5a0(*(undefined8 *)(lVar5 + 0x60),param_1,unaff_w23,unaff_x21), iVar2 == 1))
  {
    return;
  }
LAB_02f38534:
  FUN_02f38544(uVar1,&local_68);
  return;
}


