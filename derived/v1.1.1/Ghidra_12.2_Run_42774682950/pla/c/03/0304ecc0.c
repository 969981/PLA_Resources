/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304ecc0; name: FUN_0304ecc0
 */


void FUN_0304ecc0(long *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *local_410 [64];
  long *local_210 [64];
  
  if (param_2 < 2) {
    return;
  }
  local_410[0] = param_1 + (param_2 + -1);
  lVar3 = 0;
  local_210[0] = param_1;
LAB_0304ecf8:
  lVar3 = (long)(int)lVar3;
LAB_0304ee14:
  do {
    plVar5 = local_410[0];
    do {
      local_410[0] = plVar5;
      lVar4 = param_1[(long)local_410[0] - (long)param_1 >> 4];
      plVar5 = local_410[0];
      plVar6 = param_1;
      do {
        uVar1 = (ulong)*(uint *)(lVar4 + 0x10) & 0xffffff |
                (ulong)(*(uint *)(lVar4 + 0x14) & 0xffffff) << 0x20;
        plVar7 = plVar6 + 1;
        lVar8 = *plVar6;
        if (((ulong)*(uint *)(lVar8 + 0x10) & 0xffffff |
            (ulong)(*(uint *)(lVar8 + 0x14) & 0xffffff) << 0x20) < uVar1) {
          do {
            plVar6 = plVar7;
            plVar7 = plVar6 + 1;
            lVar8 = *plVar6;
          } while (((ulong)*(uint *)(lVar8 + 0x10) & 0xffffff |
                   (ulong)(*(uint *)(lVar8 + 0x14) & 0xffffff) << 0x20) < uVar1);
        }
        plVar9 = plVar5 + -1;
        lVar2 = *plVar5;
        if (uVar1 < ((ulong)*(uint *)(lVar2 + 0x10) & 0xffffff |
                    (ulong)(*(uint *)(lVar2 + 0x14) & 0xffffff) << 0x20)) {
          do {
            plVar5 = plVar9;
            plVar9 = plVar5 + -1;
            lVar2 = *plVar5;
          } while (uVar1 < ((ulong)*(uint *)(lVar2 + 0x10) & 0xffffff |
                           (ulong)(*(uint *)(lVar2 + 0x14) & 0xffffff) << 0x20));
        }
        if (plVar6 <= plVar5) {
          if (plVar5 != plVar6) {
            *plVar5 = lVar8;
            *plVar6 = lVar2;
          }
          plVar5 = plVar9;
          plVar6 = plVar7;
        }
      } while (plVar6 <= plVar5);
      if (plVar5 <= param_1) {
        param_1 = plVar6;
        if (plVar6 < local_410[0]) goto LAB_0304ee14;
        if ((int)lVar3 < 1) {
          return;
        }
        lVar3 = (long)(int)lVar3 + -1;
        param_1 = local_210[lVar3];
        local_410[0] = local_410[lVar3];
        goto LAB_0304ecf8;
      }
    } while (local_410[0] <= plVar6);
    plVar7 = plVar5;
    plVar9 = param_1;
    if ((long)local_410[0] - (long)plVar6 <= (long)plVar5 - (long)param_1) {
      plVar7 = local_410[0];
      plVar9 = plVar6;
      local_410[0] = plVar5;
      plVar6 = param_1;
    }
    local_210[lVar3] = plVar6;
    local_410[lVar3] = local_410[0];
    param_1 = plVar9;
    local_410[0] = plVar7;
    lVar3 = lVar3 + 1;
  } while( true );
}


