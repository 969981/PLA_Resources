/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306bb50; name: FUN_0306bb50
 */


void FUN_0306bb50(long param_1,long param_2,ulong param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6,uint param_7)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_b0;
  long local_a8;
  long local_a0;
  uint local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  uint local_70;
  long local_68;
  
  if ((param_7 >> 4 & 1) == 0) {
    if ((param_7 >> 7 & 1) == 0) goto LAB_0306bbfc;
    local_88 = CONCAT62(local_88._2_6_,0x80);
    lVar12 = *(long *)(param_1 + 0x500) + (param_3 & 0xffffff) * 0x20;
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x1398);
    lVar3 = *param_4;
    lVar11 = lVar3 + (long)(int)param_4[1] * 0x10;
    pcVar5 = *(code **)(*plVar2 + 0x18);
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x13b0);
    lVar3 = *param_4;
    lVar11 = lVar3 + (long)(int)param_4[1] * 0x10;
    pcVar5 = *(code **)(*plVar2 + 0x18);
    lVar12 = 0;
  }
  (*pcVar5)(plVar2,param_1,param_2,&local_88,lVar3,lVar11,lVar12);
LAB_0306bbfc:
  plVar2 = (long *)*param_4;
  local_88 = *(long *)(*(long *)(param_1 + 8) + 0x38) +
             ((ulong)*(uint *)(*plVar2 + 4) & 0xffffff) * 0xc0;
  local_80 = *(long *)(*(long *)(param_1 + 8) + 0x150) + (ulong)*(uint *)(local_88 + 0x80) * 0x80;
  if ((int)param_4[1] < 1) {
    return;
  }
  lVar11 = 0;
  lVar12 = 1;
  uVar4 = 0xffffffff;
  do {
    puVar8 = *(uint **)((long)plVar2 + lVar11);
    if (*(char *)((long)puVar8 + 0xe) == '\0') {
      lVar3 = *(long *)((long)plVar2 + lVar11 + 8);
      if (lVar12 == 1) {
        uVar6 = *(uint *)(lVar3 + 0xa0);
LAB_0306bd78:
        local_78 = *(long *)(lVar3 + 0xa8);
        local_68 = *(long *)(local_88 + 0x78);
        if (*(char *)(local_68 + 0x18) == '\x15') {
          plVar9 = (long *)(local_68 + (ulong)(uVar6 >> 0x1d) * 8 + 0x48);
          lVar10 = *plVar9;
          local_68 = 0;
          if (lVar10 != 0) {
            local_68 = lVar10 + (long)plVar9;
          }
        }
        puVar8 = *(uint **)((long)plVar2 + lVar11);
        local_70 = uVar6;
      }
      else {
        uVar6 = *(uint *)(lVar3 + 0xa0);
        if (uVar6 != local_70) goto LAB_0306bd78;
      }
      local_b0 = *(long *)(*(long *)(param_1 + 8) + 0x38) + ((ulong)*puVar8 & 0xffffff) * 0xc0;
      local_a8 = *(long *)(*(long *)(param_1 + 8) + 0x150) +
                 (ulong)*(uint *)(local_b0 + 0x80) * 0x80;
      local_a0 = *(undefined8 *)(lVar3 + 0xb0);
      local_98 = *(uint *)(lVar3 + 0xa4);
      local_90 = *(long *)(local_b0 + 0x78);
      if (*(char *)(local_90 + 0x18) == '\x15') {
        plVar2 = (long *)(local_90 + ((ulong)(local_98 >> 0x1a) & 0x38) + 0x48);
        local_90 = *plVar2;
        if (local_90 == 0) {
          local_90 = 0;
        }
        else {
          local_90 = local_90 + (long)plVar2;
        }
      }
      FUN_0306b740(param_1,param_2,lVar3,&local_88,&local_b0,lVar12 == 1 || local_70 != uVar4,
                   param_5,param_6);
    }
    else {
      puVar7 = *(undefined8 **)((long)plVar2 + lVar11 + 8);
      local_78 = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)(puVar7 + 1) * 0x50;
      puVar8 = (uint *)*puVar7;
      lVar3 = *(long *)(local_88 + 0x78);
      if (*(char *)(lVar3 + 0x19) == '\x02') {
        local_70 = 0xffffffff;
        if (*(char *)(lVar3 + 0x18) == '\x15') {
          lVar10 = *(long *)(lVar3 + 0x80);
          if (lVar10 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = lVar10 + lVar3 + 0x80;
          }
        }
LAB_0306bca4:
        local_68 = lVar3;
      }
      else {
        uVar6 = puVar8[1];
        if (*(char *)(lVar3 + 0x18) != '\x15') {
LAB_0306be60:
          local_70 = uVar6;
          if (*(char *)(lVar3 + 0x18) == '\x15') {
            plVar9 = (long *)(lVar3 + ((ulong)(uVar6 >> 0x1a) & 0x38) + 0x48);
            lVar3 = *plVar9;
            if (lVar3 != 0) {
              lVar3 = lVar3 + (long)plVar9;
            }
          }
          goto LAB_0306bca4;
        }
        bVar1 = *(byte *)((long)puVar8 + 0xe) >> 5;
        plVar9 = (long *)(lVar3 + (ulong)bVar1 * 8 + 0x48);
        local_68 = *plVar9;
        if (local_68 != 0) {
          local_68 = local_68 + (long)plVar9;
        }
        local_70 = (uint)bVar1 << 0x1d | 0x1fffffff;
        if (*(char *)(local_68 + 0x19) != '\x02') goto LAB_0306be60;
      }
      lVar10 = *(long *)(param_1 + 8);
      local_b0 = *(long *)(lVar10 + 0x38) +
                 ((ulong)**(uint **)((long)plVar2 + lVar11) & 0xffffff) * 0xc0;
      local_a8 = *(long *)(lVar10 + 0x150) + (ulong)*(uint *)(local_b0 + 0x80) * 0x80;
      local_a0 = *(long *)(param_1 + 0x20) + (ulong)*(ushort *)((long)puVar7 + 10) * 0x50;
      lVar3 = *(long *)(local_b0 + 0x78);
      if (*(char *)(lVar3 + 0x19) == '\x02') {
        local_98 = 0xffffffff;
        if (*(char *)(lVar3 + 0x18) == '\x15') {
          plVar2 = (long *)(lVar3 + 0x80);
          lVar3 = *plVar2;
joined_r0x0306bf9c:
          if (lVar3 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = lVar3 + (long)plVar2;
          }
        }
LAB_0306bd04:
        local_90 = lVar3;
      }
      else {
        uVar6 = *puVar8;
        if (*(char *)(lVar3 + 0x18) != '\x15') {
LAB_0306bebc:
          local_98 = uVar6;
          if (*(char *)(lVar3 + 0x18) == '\x15') {
            plVar2 = (long *)(lVar3 + ((ulong)(uVar6 >> 0x1a) & 0x38) + 0x48);
            lVar3 = *plVar2;
            goto joined_r0x0306bf9c;
          }
          goto LAB_0306bd04;
        }
        plVar2 = (long *)(lVar3 + ((ulong)(*(byte *)((long)puVar8 + 0xe) >> 2) & 7) * 8 + 0x48);
        local_90 = *plVar2;
        if (local_90 == 0) {
          local_90 = 0;
        }
        else {
          local_90 = local_90 + (long)plVar2;
        }
        local_98 = (uint)(*(byte *)((long)puVar8 + 0xe) >> 2) << 0x1d | 0x1fffffff;
        if (*(char *)(local_90 + 0x19) != '\x02') goto LAB_0306bebc;
      }
      (**(code **)(**(long **)(lVar10 + 0x658) + 0x68))
                (*(long **)(lVar10 + 0x658),param_1,*(undefined8 *)(param_2 + 8),puVar8,&local_88,
                 &local_b0,lVar12 == 1 || local_70 != uVar4,param_5,param_6);
    }
    if ((int)param_4[1] <= lVar12) {
      return;
    }
    lVar12 = lVar12 + 1;
    lVar11 = lVar11 + 0x10;
    plVar2 = (long *)*param_4;
    uVar4 = local_70;
  } while( true );
}


