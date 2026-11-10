/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eaf850; name: FUN_02eaf850
 */


void FUN_02eaf850(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long alStack_68 [3];
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x58) == 0) {
      uVar2 = param_2[1];
      *(undefined8 *)(param_1 + 0x18) = *param_2;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[5];
      *(undefined8 *)(param_1 + 0x38) = param_2[4];
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar3;
    }
    else {
      puVar9 = *(undefined4 **)(lVar7 + 0x50);
      do {
        iVar1 = 0;
        if (puVar9[6] != 0) {
          iVar1 = puVar9[6] + -2;
        }
        FUN_02edff20(DAT_0440a160,param_1,*puVar9,*(undefined1 *)(puVar9 + 1),
                     *(undefined1 *)((long)puVar9 + 5),*(undefined2 *)((long)puVar9 + 6),puVar9[2],
                     puVar9[7],*(long *)(puVar9 + 4) + 0xc,iVar1,param_2,1,1);
        puVar9 = puVar9 + 10;
      } while (puVar9 != (undefined4 *)
                         (*(long *)(lVar7 + 0x50) + (ulong)*(uint *)(lVar7 + 0x58) * 0x28));
      uVar2 = param_2[1];
      lVar7 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *param_2;
      *(undefined8 *)(param_1 + 0x20) = uVar2;
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[5];
      *(undefined8 *)(param_1 + 0x38) = param_2[4];
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar3;
      if (lVar7 == 0) {
        return;
      }
    }
    local_98 = *param_2;
    local_70 = 0;
    alStack_68[1] = 0;
    alStack_68[2] = 0x200000001;
    local_90 = 0xff00;
    local_78 = 0x100000000;
    local_88 = 0;
    uStack_80 = 0;
    uVar5 = (ulong)*(uint *)(lVar7 + 0x58);
    if (*(uint *)(lVar7 + 0x58) != 0) {
      lVar6 = *(long *)(lVar7 + 0x50);
      lVar8 = lVar6;
      alStack_68[0] = param_1;
      do {
        if (*(char *)(lVar8 + 4) == '\x02') {
          FUN_02ec512c(DAT_0440a180,alStack_68,&local_98,param_3);
          lVar6 = *(long *)(lVar7 + 0x50);
          uVar5 = (ulong)*(uint *)(lVar7 + 0x58);
        }
        lVar8 = lVar8 + 0x28;
      } while (lVar8 != lVar6 + uVar5 * 0x28);
    }
  }
  return;
}


