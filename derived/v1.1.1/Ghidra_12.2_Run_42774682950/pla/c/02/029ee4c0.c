/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ee4c0; name: FUN_029ee4c0
 */


undefined8 FUN_029ee4c0(long param_1,long param_2,long param_3,undefined2 param_4,uint param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  undefined1 auStack_60 [4];
  char local_5c [4];
  undefined1 auStack_58 [8];
  long local_50;
  undefined2 local_48;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
  bVar2 = *(byte *)(param_3 + 0x7d);
  if (bVar2 < 6) {
    uVar5 = 0;
  }
  else if (bVar2 < 0xc) {
    uVar5 = 2;
  }
  else if (bVar2 < 0x12) {
    uVar5 = 1;
  }
  else {
    uVar4 = 3;
    if (0x17 < bVar2) {
      uVar4 = (uint)(bVar2 < 0x1e) << 2;
    }
    uVar5 = (ulong)uVar4;
  }
  uVar4 = (uint)*(byte *)(lVar7 + uVar5 * 0x38 + 0x38);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      if (*(byte *)(*(long *)(lVar7 + uVar5 * 0x38 + (ulong)(uVar6 & 0xff) * 8 + 8) + 0x7d) == bVar2
         ) {
        uVar4 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
        if ((uVar4 & 0xff) != 6) goto LAB_029ee574;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
  }
  uVar4 = 6;
LAB_029ee574:
  FUN_02947b84(*(undefined8 *)(param_1 + 8),uVar4,local_5c,auStack_60);
  bVar2 = *(byte *)(param_2 + 0x7d);
  if (bVar2 < 6) {
    local_5c[0] = '\0';
    cVar1 = local_5c[0];
  }
  else if (bVar2 < 0xc) {
    local_5c[0] = '\x02';
    cVar1 = local_5c[0];
  }
  else if (bVar2 < 0x12) {
    local_5c[0] = '\x01';
    cVar1 = local_5c[0];
  }
  else if (bVar2 < 0x18) {
    local_5c[0] = '\x03';
    cVar1 = local_5c[0];
  }
  else {
    cVar1 = (bVar2 < 0x1e) << 2;
  }
  local_5c[0] = cVar1;
  if ((param_5 & 1) == 0) {
    bVar2 = FUN_029506a8(param_2,0xf);
    bVar3 = FUN_029506a8(param_3,0xf);
    if (bVar2 < bVar3) {
      return 0;
    }
  }
  local_50 = param_3;
  local_48 = param_4;
  FUN_029ebce4(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1460),auStack_58,&local_50);
  lVar7 = *(long *)(param_1 + 0x20);
  piVar8 = *(int **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x1e8);
  piVar9 = piVar8 + 1;
  if ((char)*piVar9 != cVar1) {
    if ((char)*piVar9 == '\x05') {
      lVar10 = 0;
    }
    else {
      piVar9 = (int *)((long)piVar8 + 5);
      if (*(char *)piVar9 == cVar1) goto LAB_029ee738;
      if (*(char *)piVar9 == '\x05') {
        lVar10 = 1;
      }
      else {
        piVar9 = (int *)((long)piVar8 + 6);
        if (*(char *)piVar9 == cVar1) goto LAB_029ee738;
        if (*(char *)piVar9 == '\x05') {
          lVar10 = 2;
        }
        else {
          piVar9 = (int *)((long)piVar8 + 7);
          if (*(char *)piVar9 == cVar1) goto LAB_029ee738;
          if (*(char *)piVar9 == '\x05') {
            lVar10 = 3;
          }
          else {
            piVar9 = piVar8 + 2;
            if (((char)*piVar9 == cVar1) || ((char)*piVar9 != '\x05')) goto LAB_029ee738;
            lVar10 = 4;
          }
        }
      }
    }
    *(char *)piVar9 = cVar1;
    piVar8[lVar10 + 3] = 1;
    *piVar8 = *piVar8 + 1;
  }
LAB_029ee738:
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x50,cVar1,1);
  return 1;
}


