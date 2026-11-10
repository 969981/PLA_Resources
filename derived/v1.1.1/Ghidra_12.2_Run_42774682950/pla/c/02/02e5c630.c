/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5c630; name: FUN_02e5c630
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5c630(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined **local_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_88;
  undefined8 uStack_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  
  uVar5 = _DAT_042a5ca4;
  lVar7 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_2 + 1);
  lVar9 = *(long *)(*(long *)(lVar7 + 0x38) + 0x28);
  if (uVar1 != 0) {
    lVar13 = *(long *)(lVar9 + 0xa8);
    uVar3 = 0;
    uVar10 = (uint)lVar13;
    if (uVar1 != 0) {
      uVar3 = uVar10 / uVar1;
    }
    lVar12 = *(long *)(*param_2 + (ulong)(uVar10 - uVar3 * uVar1) * 8);
    if (lVar12 == 0) {
      lVar12 = 0;
      goto LAB_02e5c670;
    }
    do {
      if (*(long *)(lVar12 + 0x40) == lVar13) {
        if (lVar12 == 0) goto LAB_02e5c670;
        plVar11 = (long *)(lVar12 + 0x78);
        goto LAB_02e5c674;
      }
      lVar12 = *(long *)(lVar12 + 0x48);
    } while (lVar12 != 0);
  }
  lVar12 = 0;
LAB_02e5c670:
  plVar11 = param_2 + 0xd;
LAB_02e5c674:
  lVar13 = *plVar11;
  local_78 = DAT_042a5ca8;
  if (3 < DAT_042a5ca8) {
    local_78 = 4;
  }
  uStack_74 = 1;
  local_88 = 0;
  uStack_80 = 0;
  local_70 = _DAT_042a5cac;
  uStack_6c = _DAT_042a5ca4;
  local_67 = 0;
  local_64 = 0x447a0000;
  local_68 = DAT_042a5cb0;
  if (*(char *)(lVar9 + 0xf9) != '\0') {
    if (*(uint *)(param_1 + 0x68) != 0) {
      lVar7 = (ulong)*(uint *)(param_1 + 0x68) * 0x50;
      puVar14 = *(undefined8 **)(param_1 + 0x60);
      do {
        (**(code **)*puVar14)(puVar14);
        lVar7 = lVar7 + -0x50;
        puVar14 = puVar14 + 10;
      } while (lVar7 != 0);
      lVar7 = *(long *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  local_a8 = &PTR_LAB_042a5ee0;
  local_a0 = 0x40c90fdb40000000;
  local_88 = lVar13 + 8;
  if (*(uint *)(lVar7 + 0x40) < 3) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  }
  local_60 = *(undefined4 *)(lVar7 + 0x78);
  local_5c = *(undefined4 *)(lVar7 + 0x7c);
  uStack_58 = *(undefined4 *)(lVar7 + 0x80);
  lStack_98 = param_1;
  FUN_02e5ff18(&local_88,&local_60,param_1 + 0x60,uVar5,&local_a8);
  if (lVar12 != 0) {
    cVar2 = *(char *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x28) + 0xf8);
    FUN_02e610dc(&local_88,DAT_042a5cb1);
    uVar8 = (ulong)*(uint *)(param_1 + 0x38);
    if (*(uint *)(param_1 + 0x38) != 0) {
      puVar14 = *(undefined8 **)(param_1 + 0x30);
      if (cVar2 == '\0') {
        cVar2 = *(char *)(puVar14 + 0xf);
        puVar4 = puVar14;
        while( true ) {
          if (cVar2 == '\0') {
            uVar6 = FUN_02e45f34(param_2,*puVar4);
            FUN_02e60bf4(&local_88,param_1,puVar4,uVar6,lVar12);
            FUN_02e58ec8(puVar4 + 1);
            *(undefined1 *)(puVar4 + 0xf) = 1;
            puVar14 = *(undefined8 **)(param_1 + 0x30);
            uVar8 = (ulong)*(uint *)(param_1 + 0x38);
          }
          if (puVar4 + 0x10 == puVar14 + uVar8 * 0x10) break;
          cVar2 = *(char *)(puVar4 + 0x1f);
          puVar4 = puVar4 + 0x10;
        }
      }
      else {
        do {
          uVar6 = FUN_02e45f34(param_2,*puVar14);
          FUN_02e60bf4(&local_88,param_1,puVar14,uVar6,lVar12);
          FUN_02e58ec8(puVar14 + 1);
          *(undefined1 *)(puVar14 + 0xf) = 1;
          puVar14 = puVar14 + 0x10;
        } while (puVar14 !=
                 (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x80)
                );
      }
    }
  }
  return;
}


