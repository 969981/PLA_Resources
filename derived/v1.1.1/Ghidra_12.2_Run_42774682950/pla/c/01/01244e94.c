/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01244e94; name: FUN_01244e94
 */


void FUN_01244e94(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  puVar3 = &local_b0;
  puVar2 = &local_b0;
  lVar4 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x1b0) * 8 + 0x70);
  if (lVar4 == 0) goto switchD_01244edc_default;
  switch(param_2) {
  case 3:
    local_b0 = DAT_0423e870;
    puStack_a8 = PTR_s_eyewear_0423e878;
    local_a0 = DAT_0423e880;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
LAB_01245068:
      FUN_0135a798(lVar4 + 0x118,puVar2);
      goto switchD_01244edc_default;
    }
    break;
  case 4:
    local_38 = DAT_0423e888;
    puStack_30 = PTR_DAT_0423e890;
    local_28 = DAT_0423e898;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
      puVar2 = &local_38;
      goto LAB_01245068;
    }
    puVar3 = &local_38;
    break;
  case 5:
    local_50 = DAT_0423e8a0;
    puStack_48 = PTR_DAT_0423e8a8;
    local_40 = DAT_0423e8b0;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
      puVar2 = &local_50;
      goto LAB_01245068;
    }
    puVar3 = &local_50;
    break;
  case 6:
    local_68 = DAT_0423e8b8;
    puStack_60 = PTR_s_bottoms_0423e8c0;
    local_58 = DAT_0423e8c8;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
      puVar2 = &local_68;
      goto LAB_01245068;
    }
    puVar3 = &local_68;
    break;
  case 7:
    local_80 = DAT_0423e8d0;
    puStack_78 = PTR_s_dress_0423e8d8;
    local_70 = DAT_0423e8e0;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
      puVar2 = &local_80;
      goto LAB_01245068;
    }
    puVar3 = &local_80;
    break;
  case 8:
    local_98 = DAT_0423e8e8;
    puStack_90 = PTR_s_shoes_0423e8f0;
    local_88 = DAT_0423e8f8;
    lVar1 = *(long *)(lVar4 + 0x120);
    if (lVar1 == *(long *)(lVar4 + 0x128)) {
      puVar2 = &local_98;
      goto LAB_01245068;
    }
    puVar3 = &local_98;
    break;
  default:
    goto switchD_01244edc_default;
  }
  FUN_0135a868(lVar4 + 0x130,lVar1,puVar3);
  *(long *)(lVar4 + 0x120) = *(long *)(lVar4 + 0x120) + 0x18;
switchD_01244edc_default:
  *(undefined1 *)(param_1 + 0x1b1) = 1;
  return;
}


