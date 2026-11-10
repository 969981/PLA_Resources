/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00173e20; name: FUN_00173e20
 */


long FUN_00173e20(long param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_48;
  undefined8 local_40;
  char *local_38;
  char local_30;
  undefined1 uStack_2f;
  char cStack_2e;
  undefined1 uStack_2d;
  short sStack_2c;
  undefined2 uStack_2a;
  
  cVar1 = *param_3;
  if (cVar1 == '\x1b') {
    param_3 = "binary string";
  }
  else if ((cVar1 == '@') || (cVar1 == '=')) {
    param_3 = param_3 + 1;
  }
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  lVar3 = FUN_00179140(param_2,&local_30,3);
  if (lVar3 != 0) goto LAB_00174074;
  if (CONCAT11(uStack_2f,local_30) == 0x754c && cStack_2e == 'a') {
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != 'S') goto LAB_00174094;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\0') goto LAB_001740a4;
    lVar3 = FUN_00179140(local_40,&local_30,6);
    if (lVar3 != 0) goto LAB_00174074;
    if (CONCAT13(uStack_2d,CONCAT12(cStack_2e,CONCAT11(uStack_2f,local_30))) != 0xa0d9319 ||
        sStack_2c != 0xa1a) goto LAB_001740b4;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\x04') goto LAB_001740c4;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\b') goto LAB_001740e8;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\x04') goto LAB_0017410c;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\b') goto LAB_00174130;
    lVar3 = FUN_00179140(local_40,&local_30,1);
    if (lVar3 != 0) goto LAB_00174074;
    if (local_30 != '\b') goto LAB_00174154;
    lVar3 = FUN_00179140(local_40,&local_30,8);
    if (lVar3 != 0) {
LAB_00174074:
      FUN_00174820(&local_48,"truncated");
      goto LAB_00174084;
    }
    if (CONCAT26(uStack_2a,
                 CONCAT24(sStack_2c,
                          CONCAT13(uStack_2d,CONCAT12(cStack_2e,CONCAT11(uStack_2f,local_30))))) ==
        0x5678) {
      lVar3 = FUN_00179140(local_40,&local_30,8);
      if (lVar3 == 0) {
        if ((double)CONCAT26(uStack_2a,
                             CONCAT24(sStack_2c,
                                      CONCAT13(uStack_2d,
                                               CONCAT12(cStack_2e,CONCAT11(uStack_2f,local_30)))))
            != 370.5) goto LAB_00174188;
        lVar3 = FUN_00179140(local_40,&local_30,1);
        if (lVar3 == 0) {
          lVar3 = FUN_0015c6c0(param_1,local_30);
          plVar5 = *(long **)(param_1 + 0x10);
          *plVar5 = lVar3;
          *(undefined4 *)(plVar5 + 1) = 0x46;
          FUN_0015a750(param_1);
          uVar4 = FUN_0015c910(param_1);
          *(undefined8 *)(lVar3 + 0x18) = uVar4;
          FUN_001741a0(&local_48,uVar4,0);
          return lVar3;
        }
      }
      goto LAB_00174074;
    }
  }
  else {
LAB_00174084:
    FUN_00174820(&local_48,"not a");
LAB_00174094:
    FUN_00174820(&local_48,"version mismatch in");
LAB_001740a4:
    FUN_00174820(&local_48,"format mismatch in");
LAB_001740b4:
    FUN_00174820(&local_48,"corrupted");
LAB_001740c4:
    uVar4 = FUN_00162fa0(local_48,"%s size mismatch in",&DAT_038da45f);
    FUN_00174820(&local_48,uVar4);
LAB_001740e8:
    uVar4 = FUN_00162fa0(local_48,"%s size mismatch in","size_t");
    FUN_00174820(&local_48,uVar4);
LAB_0017410c:
    uVar4 = FUN_00162fa0(local_48,"%s size mismatch in","Instruction");
    FUN_00174820(&local_48,uVar4);
LAB_00174130:
    uVar4 = FUN_00162fa0(local_48,"%s size mismatch in","lua_Integer");
    FUN_00174820(&local_48,uVar4);
LAB_00174154:
    uVar4 = FUN_00162fa0(local_48,"%s size mismatch in","lua_Number");
    FUN_00174820(&local_48,uVar4);
  }
  FUN_00174820(&local_48,"endianness mismatch in");
LAB_00174188:
  FUN_00174820(&local_48,"float format mismatch in");
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x174198);
  (*pcVar2)();
}


