/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001599d0; name: FUN_001599d0
 */


void FUN_001599d0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_130 [128];
  undefined2 local_6c [30];
  
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  uVar2 = FUN_00162b30(param_1,param_2,auStack_130 + 0x80);
  if ((*(byte *)((long)puVar6 + 0x42) >> 1 & 1) == 0) goto LAB_00159ac0;
  lVar4 = *(long *)(*(long *)*puVar6 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x68);
  if (*(long *)(lVar4 + 0x48) == 0) {
    uVar5 = 0xffffffff;
    if (lVar3 != 0) goto LAB_00159a68;
LAB_00159a9c:
    local_6c[0] = 0x3f;
  }
  else {
    uVar5 = *(undefined4 *)
             (*(long *)(lVar4 + 0x48) +
             ((puVar6[5] - *(long *)(lVar4 + 0x38)) * 0x40000000 + -0x100000000 >> 0x1e));
    if (lVar3 == 0) goto LAB_00159a9c;
LAB_00159a68:
    FUN_00163010(local_6c,lVar3 + 0x18,0x3c);
  }
  FUN_00162fa0(param_1,"%s:%d: %s",local_6c,uVar5,uVar2);
LAB_00159ac0:
  FUN_00159dd0(param_1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x159ac8);
  (*pcVar1)();
}


