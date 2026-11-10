/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3aaac; name: FUN_02a3aaac
 */


void FUN_02a3aaac(long param_1,undefined8 param_2,uint param_3,int *param_4,long param_5,
                 ulong param_6)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  char cVar10;
  undefined8 local_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  
  if (param_3 == 0) {
    cVar3 = '\0';
    cVar10 = '\0';
  }
  else {
    cVar10 = '\0';
    cVar3 = '\0';
    uVar5 = (ulong)param_3;
    piVar6 = param_4;
    do {
      if (7 < *piVar6) {
        cVar3 = cVar3 + '\x01';
      }
      if (*piVar6 < 7) {
        cVar10 = cVar10 + '\x01';
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 != 0);
  }
  if ((param_6 & 1) == 0) {
    if (cVar3 == '\0') {
      if (cVar10 == '\0') {
        return;
      }
      uVar2 = 0x23f;
    }
    else {
      uVar2 = 0x23e;
    }
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9c,uVar2,0xffff0000);
    return;
  }
  if (cVar3 == '\0') goto switchD_02a3abec_default;
  bVar4 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_49 = 0;
  uStack_48 = 0;
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      if ((7 < param_4[uVar5]) &&
         (bVar1 = *(byte *)(*(long *)(param_5 + uVar5 * 8) + 0x7d), bVar1 < 0x1e)) {
        if (bVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (ulong)bVar4;
          pbVar8 = (byte *)((long)&local_60 + 1);
          uVar9 = uVar7;
          do {
            if (*pbVar8 == bVar1) goto LAB_02a3ab50;
            uVar9 = uVar9 - 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar9 != 0);
        }
        bVar4 = bVar4 + 1;
        *(byte *)((long)&local_60 + uVar7 + 1) = bVar1;
        local_60 = (ulong)bVar4;
      }
LAB_02a3ab50:
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_3);
  }
  switch(cVar3) {
  case '\x01':
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,2,0,0xffff0000);
    break;
  case '\x02':
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,3,0,0,0xffff0000);
    goto joined_r0x02a3ad90;
  case '\x03':
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,4,0,0,0,0xffff0000);
joined_r0x02a3ad90:
    if (cVar10 == '\0') {
      return;
    }
    goto LAB_02a3ac10;
  case '\x04':
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,5,0,0,0,0,0xffff0000);
    goto joined_r0x02a3ade8;
  }
switchD_02a3abec_default:
joined_r0x02a3ade8:
  if (cVar10 != '\0') {
LAB_02a3ac10:
    bVar4 = 0;
    local_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_49 = 0;
    uStack_48 = 0;
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        if ((param_4[uVar5] < 7) &&
           (bVar1 = *(byte *)(*(long *)(param_5 + uVar5 * 8) + 0x7d), bVar1 < 0x1e)) {
          if (bVar4 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = (ulong)bVar4;
            pbVar8 = (byte *)((long)&local_60 + 1);
            uVar9 = uVar7;
            do {
              if (*pbVar8 == bVar1) goto LAB_02a3ac4c;
              uVar9 = uVar9 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar9 != 0);
          }
          bVar4 = bVar4 + 1;
          *(byte *)((long)&local_60 + uVar7 + 1) = bVar1;
          local_60 = (ulong)bVar4;
        }
LAB_02a3ac4c:
        uVar5 = uVar5 + 1;
      } while (uVar5 != param_3);
    }
    switch(cVar10) {
    case '\x01':
      FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,6,0,0xffff0000);
      break;
    case '\x02':
      FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,7,0,0,0xffff0000);
      break;
    case '\x03':
      FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,8,0,0,0,0xffff0000);
      break;
    case '\x04':
      FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,9,0,0,0,0,0xffff0000);
    }
  }
  return;
}


