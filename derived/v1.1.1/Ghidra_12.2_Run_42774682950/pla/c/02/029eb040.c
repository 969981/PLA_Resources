/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eb040; name: FUN_029eb040
 */


void FUN_029eb040(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  char local_38 [8];
  
  *param_2 = 0x1f;
  bVar3 = *(byte *)(*param_3 + 0x7d);
  uVar4 = (ulong)bVar3;
  pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  if ((((((*pcVar6 != '\0') && (pcVar6[2] == bVar3)) ||
        ((pcVar6[3] != '\0' && (pcVar6[5] == bVar3)))) ||
       ((pcVar6[6] != '\0' && (pcVar6[8] == bVar3)))) ||
      ((pcVar6[9] != '\0' && (pcVar6[0xb] == bVar3)))) ||
     (((pcVar6[0xc] != '\0' && (pcVar6[0xe] == bVar3)) ||
      ((pcVar6[0xf] != '\0' && (pcVar6[0x11] == bVar3)))))) {
    iVar1 = 3;
    if (0x17 < bVar3) {
      iVar1 = (uint)(bVar3 < 0x1e) << 2;
    }
    iVar2 = 1;
    if (0x11 < bVar3) {
      iVar2 = iVar1;
    }
    iVar1 = 2;
    if (0xb < bVar3) {
      iVar1 = iVar2;
    }
    iVar2 = 0;
    if (5 < bVar3) {
      iVar2 = iVar1;
    }
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x79,iVar2);
    local_50 = *param_3;
    local_48 = 0;
    FUN_029ebab4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1440),local_38,&local_50);
    if (local_38[0] == '\0') {
      return;
    }
    uVar4 = (ulong)*(byte *)(*param_3 + 0x7d);
    pcVar6 = *(char **)(*(long *)(param_1 + 0x10) + 0xa8);
  }
  lVar5 = param_3[1];
  if ((*(long *)(pcVar6 + 0x30) == 0) || (*(uint *)(pcVar6 + 0x38) <= (uint)uVar4)) {
    pcVar6 = pcVar6 + 0x3c;
  }
  else {
    pcVar6 = (char *)(*(long *)(pcVar6 + 0x30) + uVar4);
  }
  FUN_02947b84(*(undefined8 *)(param_1 + 8),*pcVar6,local_38,local_3c);
  lVar7 = local_50;
  local_50._4_4_ = SUB84(lVar7,4);
  local_50._0_4_ = CONCAT13(1,CONCAT12((char)lVar5,CONCAT11(local_3c[0],local_38[0])));
  FUN_029eb3e0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1400),local_40,&local_50);
  *param_2 = local_40[0];
  bVar3 = *(byte *)(*param_3 + 0x7d);
  if (bVar3 < 6) {
    lVar5 = 0;
  }
  else if (bVar3 < 0xc) {
    lVar5 = 2;
  }
  else if (bVar3 < 0x12) {
    lVar5 = 1;
  }
  else if (bVar3 < 0x18) {
    lVar5 = 3;
  }
  else {
    lVar5 = (ulong)(bVar3 < 0x1e) << 2;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  puVar8 = (ulong *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x1c8) + lVar5 * 8 + 0x20
                    );
  uVar4 = *puVar8;
  if (uVar4 < 0xff) {
    *puVar8 = uVar4 + 1;
  }
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x2c,0);
  return;
}


