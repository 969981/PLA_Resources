/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008334f0; name: FUN_008334f0
 */


void FUN_008334f0(undefined4 *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  uint *__src;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint local_40 [2];
  uint local_38;
  undefined2 local_34 [2];
  
  __src = local_40;
  uVar5 = FUN_00833708(param_2 + 0x7e2);
  local_34[0] = (undefined2)uVar5;
  memset(&local_38,0,4);
  puVar4 = PTR_DAT_043773c0;
  lVar6 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  if ((((lVar6 == 0) || ((uVar5 & 0xff) == 0xfd)) || (lVar11 = *(long *)(lVar6 + 0x98), lVar11 == 0)
      ) || (uVar3 = uVar5 >> 8 & 0xff, uVar3 == 0xfd)) {
LAB_008335b4:
    memset(param_1,0,4);
    *param_1 = 0;
  }
  else {
    if ((~uVar5 & 0xff) == 0) {
      lVar8 = *(long *)(lVar6 + 0x20);
      if (lVar8 != lVar6 + 0x18) {
        lVar10 = *(long *)(lVar8 + 0x10);
        while( true ) {
          if ((lVar10 == lVar11) || (*(byte *)(lVar10 + 0x28) == 0xfd)) {
            lVar8 = *(long *)(lVar8 + 8);
          }
          else {
            local_38 = local_38 | 1 << (ulong)(*(byte *)(lVar10 + 0x28) & 0x1f);
            lVar8 = *(long *)(lVar8 + 8);
          }
          if (lVar8 == lVar6 + 0x18) break;
          lVar10 = *(long *)(lVar8 + 0x10);
        }
      }
      __src = &local_38;
    }
    else {
      if (uVar3 == 0xff) {
        memset(param_1,0,4);
        lVar8 = *(long *)(lVar6 + 0x20);
        if (lVar8 == lVar6 + 0x18) {
          return;
        }
        cVar1 = *(char *)(lVar11 + 0x90);
        lVar10 = *(long *)(lVar8 + 0x10);
        do {
          if (lVar11 == lVar10) {
LAB_00833684:
            lVar8 = *(long *)(lVar8 + 8);
          }
          else {
            bVar2 = *(byte *)(lVar10 + 0x28);
            if ((bVar2 == 0xfd) || (*(char *)(lVar10 + 0x90) != cVar1)) goto LAB_00833684;
            uVar9 = (ulong)(bVar2 >> 3) & 0x1c;
            *(uint *)((long)param_1 + uVar9) =
                 *(uint *)((long)param_1 + uVar9) | 1 << (ulong)(bVar2 & 0x1f);
            lVar8 = *(long *)(lVar8 + 8);
          }
          if (lVar8 == lVar6 + 0x18) {
            return;
          }
          lVar10 = *(long *)(lVar8 + 0x10);
        } while( true );
      }
      memset(local_40,0,4);
      uVar7 = FUN_00855004(*(undefined8 *)puVar4);
      lVar6 = FUN_00827d64(uVar7,local_34);
      if (lVar6 == 0) goto LAB_008335b4;
      local_40[0] = 1 << (ulong)(*(byte *)(lVar6 + 0x28) & 0x1f) | local_40[0];
    }
    memcpy(param_1,__src,4);
  }
  return;
}


