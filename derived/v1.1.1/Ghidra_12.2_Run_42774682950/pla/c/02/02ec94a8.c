/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec94a8; name: FUN_02ec94a8
 */


int FUN_02ec94a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                uint param_5,uint param_6)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *__src;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  size_t sVar11;
  undefined8 *__dest;
  long lVar12;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  puVar9 = (undefined8 *)FUN_02f59e30(0,0x168);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_02ec7db4(puVar9,param_2,param_1,param_5 & 1,param_6 & 1);
    uVar10 = FUN_02ec8c7c(puVar9);
    if (((uVar10 & 1) != 0) || (iVar8 = FUN_02ec8b50(puVar9,0), iVar8 == 1)) {
      iVar8 = FUN_02ec84ec(puVar9);
      lVar12 = DAT_0440a410;
      lVar6 = DAT_0440a7e0;
      if (iVar8 != 1) {
        (**(code **)*puVar9)(puVar9);
        FUN_02f59e60(0,puVar9);
        return iVar8;
      }
      do {
        DAT_0440a410 = lVar12;
        if (lVar6 == 0) {
          puVar9[1] = 0;
          plVar3 = &DAT_0440a7e0;
          if (DAT_0440a7e0 != 0) {
            plVar3 = (long *)((long)DAT_0440a7d8 + 8);
          }
          *plVar3 = (long)puVar9;
          DAT_0440a7d0 = DAT_0440a7d0 + 1;
          DAT_0440a7d8 = puVar9;
          FUN_02ec9840(param_3,param_4,puVar9[2]);
          FUN_02f14074(0);
          pcVar7 = DAT_0440a5a8;
          if (DAT_0440a5a8 != (char *)0x0) {
            sVar11 = strlen(DAT_0440a5a8);
            pcVar7[sVar11 - 5] = pcVar7[sVar11 - 5] + '\x01';
            FUN_02ec841c(puVar9,pcVar7);
          }
          return 1;
        }
        if (*(int *)(lVar6 + 0x58) == *(int *)(puVar9 + 0xb)) {
          if ((*(char *)(lVar6 + 0x166) == '\0') && (*(int *)(lVar6 + 0x30) == 0)) {
            local_60 = (undefined8 *)0x0;
            local_58 = 0;
            if (lVar12 == 0) {
              FUN_02e43d1c();
              lVar12 = DAT_0440a410;
              if (local_60 != (undefined8 *)0x0) {
                local_58 = local_58 & 0xffffffff00000000;
                if (&local_68 != local_60) {
                  FUN_02f59e70(4);
                }
                local_60 = (undefined8 *)0x0;
                local_58 = local_58 & 0xffffffff;
              }
            }
            uVar10 = local_58;
            __src = local_60;
            uVar4 = *(uint *)(lVar12 + 0xb0);
            if ((uVar4 < (uint)local_58) || (uVar4 <= local_58._4_4_)) {
              __dest = (undefined8 *)0x0;
              uVar5 = uVar4;
              uVar2 = local_58._4_4_;
joined_r0x02ec96e4:
              local_58 = CONCAT44(uVar2,uVar4);
              if (((uVar5 != 0) &&
                  (*__dest = **(undefined8 **)(lVar12 + 0xa8), 1 < *(uint *)(lVar12 + 0xb0))) &&
                 (local_60[1] = *(undefined8 *)(*(long *)(lVar12 + 0xa8) + 8),
                 2 < *(uint *)(lVar12 + 0xb0))) {
                uVar10 = 2;
                do {
                  uVar1 = uVar10 + 1;
                  local_60[uVar10] = *(undefined8 *)(*(long *)(lVar12 + 0xa8) + uVar10 * 8);
                  uVar10 = uVar1;
                } while (uVar1 < *(uint *)(lVar12 + 0xb0));
              }
            }
            else {
              uVar2 = local_58._4_4_ + (uVar4 - (uint)local_58);
              if (1 < uVar2) {
                __dest = (undefined8 *)FUN_02f59e40(4,(ulong)uVar2 << 3,8);
                if (__src == (undefined8 *)0x0) goto LAB_02ec9694;
LAB_02ec9688:
                if ((__dest == __src) || (__dest == (undefined8 *)0x0)) goto LAB_02ec9694;
                memcpy(__dest,__src,(uVar10 & 0x1fffffff) << 3);
                if (&local_68 != __src) {
                  FUN_02f59e70(4,__src);
                }
LAB_02ec9698:
                uVar5 = *(uint *)(lVar12 + 0xb0);
                local_60 = __dest;
                goto joined_r0x02ec96e4;
              }
              __dest = &local_68;
              if (local_60 != (undefined8 *)0x0) goto LAB_02ec9688;
LAB_02ec9694:
              if (__dest != (undefined8 *)0x0) goto LAB_02ec9698;
            }
            FUN_02ec9840(&local_68,0,*(undefined8 *)(lVar6 + 0x10));
          }
          *(undefined1 *)(lVar6 + 0x166) = 1;
          *(undefined1 *)((long)puVar9 + 0x166) = 1;
        }
        lVar12 = DAT_0440a410;
        lVar6 = *(long *)(lVar6 + 8);
      } while( true );
    }
    (**(code **)*puVar9)(puVar9);
    FUN_02f59e60(0,puVar9);
  }
  return 0x34;
}


