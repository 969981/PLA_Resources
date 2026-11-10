/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00332850; name: FUN_00332850
 */


undefined8
FUN_00332850(long *param_1,undefined8 param_2,byte param_3,byte param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  auVar6 = FUN_00335f6c();
  puVar2 = auVar6._0_8_;
  puVar2[2] = param_5;
  if ((auVar6._8_8_ & 0xff) == 0) goto switchD_003328c4_default;
  *(undefined1 *)((long)puVar2 + 9) = 1;
  *(byte *)(puVar2 + 1) = param_3;
  uVar1 = *(undefined4 *)(PTR_DAT_04373b08 + (ulong)param_3 * 4);
  *(byte *)((long)puVar2 + 0xb) = param_4 & 1;
  switch(uVar1) {
  case 1:
  case 8:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x10);
      }
      puVar4 = PTR_LAB_04373b10;
      break;
    }
LAB_0033299c:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
    if (plVar3 != (long *)0x0) {
      *plVar3 = 0;
      goto LAB_00332a00;
    }
    goto LAB_00332a04;
  case 2:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b18;
    break;
  case 3:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b20;
    break;
  case 4:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b28;
    break;
  case 5:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b38;
    break;
  case 6:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b30;
    break;
  case 7:
    lVar5 = *param_1;
    if (lVar5 == 0) goto LAB_0033299c;
    if (*(long *)(lVar5 + 0x70) != 0) {
      FUN_0032cf88(lVar5,0,0x10);
    }
    puVar4 = PTR_LAB_04373b40;
    break;
  case 9:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x18);
      }
      puVar4 = PTR_LAB_04373b48;
LAB_003329ec:
      plVar3 = (long *)FUN_0032c850(lVar5,0x18,puVar4);
      plVar3[2] = 0;
      *plVar3 = lVar5;
LAB_00332a00:
      plVar3[1] = 0;
      goto LAB_00332a04;
    }
    goto LAB_00332a1c;
  case 10:
    lVar5 = *param_1;
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x70) != 0) {
        FUN_0032cf88(lVar5,0,0x18);
      }
      puVar4 = PTR_LAB_04373b50;
      goto LAB_003329ec;
    }
LAB_00332a1c:
    plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
    }
    goto LAB_00332a04;
  default:
    goto switchD_003328c4_default;
  }
  plVar3 = (long *)FUN_0032c850(lVar5,0x10,puVar4);
  *plVar3 = 0;
  plVar3[1] = lVar5;
LAB_00332a04:
  *puVar2 = plVar3;
switchD_003328c4_default:
  return *puVar2;
}


