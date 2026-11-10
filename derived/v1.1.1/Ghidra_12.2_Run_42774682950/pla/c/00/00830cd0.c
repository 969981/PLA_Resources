/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00830cd0; name: FUN_00830cd0
 */


/* WARNING: Removing unreachable block (ram,0x00830e1c) */

int FUN_00830cd0(long param_1,byte param_2,byte param_3,long param_4)

{
  long lVar1;
  undefined2 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined2 *puVar10;
  undefined1 auStack_90 [32];
  undefined1 local_70;
  undefined1 uStack_6f;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  uVar4 = (ulong)*(byte *)(param_1 + 3);
  if (*(byte *)(param_1 + 3) == 0) {
    iVar6 = 0;
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    lVar8 = 0x10;
    if (*(char *)(param_1 + 7) != '\0') goto LAB_00830d48;
LAB_00830d2c:
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x18;
    if (uVar7 < uVar4) {
      if (uVar7 != *(byte *)(param_1 + 7)) {
LAB_00830d48:
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + lVar8) != 0) {
          lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 8) +
                  (ulong)*(byte *)(*(long *)(param_1 + 0x28) + uVar7) * 0x20;
          lVar9 = *(long *)(lVar1 + 0x10);
          uVar5 = (ulong)*(byte *)(lVar1 + 0x1c);
          if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)*(byte *)(param_1 + 6) * 8) +
                      uVar5 * 4) == 1) {
            bVar3 = *(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar5 * 8) +
                            (ulong)*(byte *)(param_1 + 6) * 4) == 1;
            if (((param_2 | bVar3 ^ 0xffU) & 1) == 0) goto LAB_00830d2c;
          }
          else {
            bVar3 = false;
          }
          if (bVar3 || (param_3 & 1) != 0) {
            FUN_007f0ce0(auStack_90);
            local_70 = 0xfd;
            uStack_6f = 0xfd;
            uVar2 = *(undefined2 *)(lVar9 + 0x90);
            FUN_007f0f88(auStack_90,lVar9 + 8);
            uStack_6f = 0xff;
            puVar10 = (undefined2 *)(param_4 + (long)iVar6 * 0x38);
            local_70 = (undefined1)uVar7;
            uStack_6e = 0;
            local_68 = 0;
            *puVar10 = uVar2;
            FUN_007f0f88(puVar10 + 4,auStack_90);
            iVar6 = iVar6 + 1;
            *(ulong *)(puVar10 + 0x14) =
                 CONCAT44(uStack_6c,CONCAT22(uStack_6e,CONCAT11(uStack_6f,local_70)));
            *(undefined8 *)(puVar10 + 0x18) = local_68;
            uVar4 = (ulong)*(byte *)(param_1 + 3);
          }
        }
      }
      goto LAB_00830d2c;
    }
  }
  return iVar6;
}


