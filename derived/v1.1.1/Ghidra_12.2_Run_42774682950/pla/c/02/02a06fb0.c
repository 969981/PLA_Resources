/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a06fb0; name: FUN_02a06fb0
 */


void FUN_02a06fb0(long param_1,undefined2 *param_2,long *param_3)

{
  long lVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  char local_44 [4];
  char local_40 [4];
  undefined1 local_3c [4];
  undefined4 local_38 [2];
  
  *param_2 = 0;
  local_3c[0] = (undefined1)param_3[2];
  lVar1 = *param_3;
  puVar2 = (undefined4 *)param_3[1];
  FUN_0297abdc(*(undefined8 *)(param_1 + 0x38),lVar1,local_3c,local_40,local_44);
  if (local_40[0] != '\0') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    bVar3 = *(byte *)(lVar1 + 0x7d);
    if (bVar3 < 6) {
      uVar5 = 0;
    }
    else if (bVar3 < 0xc) {
      uVar5 = 2;
    }
    else if (bVar3 < 0x12) {
      uVar5 = 1;
    }
    else {
      uVar9 = 3;
      if (0x17 < bVar3) {
        uVar9 = (uint)(bVar3 < 0x1e) << 2;
      }
      uVar5 = (ulong)uVar9;
    }
    uVar9 = (uint)*(byte *)(lVar8 + uVar5 * 0x38 + 0x38);
    if (uVar9 != 0) {
      uVar6 = 0;
      do {
        if (*(byte *)(*(long *)(lVar8 + uVar5 * 0x38 + (ulong)(uVar6 & 0xff) * 8 + 8) + 0x7d) ==
            bVar3) {
          cVar4 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
          if (cVar4 != '\x06') goto LAB_02a070a8;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar9 != uVar6);
    }
    cVar4 = '\x06';
LAB_02a070a8:
    if (local_44[0] == '\0') {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x237,0xffff0000);
    }
    else {
      lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      lVar8 = lVar8 + (ulong)*(byte *)(lVar8 + 0x1c8) * 0x40;
      *(undefined4 *)(lVar8 + 0x18) = *puVar2;
      *(undefined1 *)(lVar8 + 0x1d) = local_3c[0];
      *(char *)(lVar8 + 0x1c) = cVar4;
      *(undefined2 *)(lVar8 + 0x1e) = 0;
      *(undefined1 *)(lVar8 + 0x20) = 0;
      local_38[0] = 0xffffffff;
      lVar7 = *(long *)(param_1 + 0x28);
      *(short *)(lVar8 + 0x24) = (short)**(undefined4 **)(lVar7 + 8);
      FUN_02a3bf4c(*(undefined8 *)(lVar7 + 0x10),puVar2,(undefined4 *)(lVar8 + 0x18),local_38);
      FUN_0297b06c(*(undefined8 *)(param_1 + 0x38),lVar1);
      *(undefined1 *)((long)param_2 + 1) = 1;
    }
    *(undefined1 *)param_2 = 1;
  }
  return;
}


