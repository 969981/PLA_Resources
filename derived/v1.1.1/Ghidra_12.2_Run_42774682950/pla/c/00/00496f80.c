/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00496f80; name: FUN_00496f80
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00496f80(undefined8 param_1,int param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  
  iVar1 = FUN_004048a0(param_1,param_4,0x80);
  if (iVar1 != 0) {
    if (param_2 == 0) {
      if (param_3 == (undefined8 *)0x0) {
        pcVar3 = "(INVALID PSS PARAMETERS)\n";
        goto LAB_0049705c;
      }
    }
    else {
      if (param_3 == (undefined8 *)0x0) {
        pcVar3 = "No PSS parameter restrictions\n";
LAB_0049705c:
        iVar1 = FUN_004044c0(param_1,pcVar3);
        return 0 < iVar1;
      }
      iVar1 = FUN_004044c0(param_1,"PSS parameter restrictions:");
      if (iVar1 < 1) {
        return false;
      }
    }
    iVar1 = FUN_004044c0(param_1,&DAT_0396725e);
    if (0 < iVar1) {
      iVar1 = param_4 + 2;
      if (param_2 == 0) {
        iVar1 = param_4;
      }
      iVar2 = FUN_004048a0(param_1,iVar1,0x80);
      if ((iVar2 != 0) && (iVar2 = FUN_004044c0(param_1,"Hash Algorithm: "), 0 < iVar2)) {
        if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
          iVar2 = FUN_004044c0(param_1,"sha1 (default)");
        }
        else {
          iVar2 = FUN_004096a0(param_1,*(undefined8 *)*param_3);
        }
        if ((((0 < iVar2) && (iVar2 = FUN_004044c0(param_1,&DAT_0396725e), 0 < iVar2)) &&
            (iVar2 = FUN_004048a0(param_1,iVar1,0x80), iVar2 != 0)) &&
           (iVar2 = FUN_004044c0(param_1,"Mask Algorithm: "), 0 < iVar2)) {
          if ((undefined8 *)param_3[1] == (undefined8 *)0x0) {
            pcVar3 = "mgf1 with sha1 (default)";
LAB_0049717c:
            iVar2 = FUN_004044c0(param_1,pcVar3);
            puVar5 = (undefined8 *)0x0;
          }
          else {
            iVar2 = FUN_004096a0(param_1,*(undefined8 *)param_3[1]);
            if ((iVar2 < 1) || (iVar2 = FUN_004044c0(param_1," with "), iVar2 < 1))
            goto LAB_00497144;
            puVar5 = (undefined8 *)param_3[1];
            iVar2 = FUN_00407f40(*puVar5);
            if ((iVar2 != 0x38f) ||
               (puVar5 = (undefined8 *)FUN_0041ed70(PTR_DAT_04374288,puVar5[1]),
               puVar5 == (undefined8 *)0x0)) {
              pcVar3 = "INVALID";
              goto LAB_0049717c;
            }
            iVar2 = FUN_004096a0(param_1,*puVar5);
          }
          if (0 < iVar2) {
            FUN_004044c0(param_1,&DAT_0396725e);
            iVar2 = FUN_004048a0(param_1,iVar1,0x80);
            if (iVar2 != 0) {
              pcVar3 = "Minimum";
              if (param_2 == 0) {
                pcVar3 = "";
              }
              iVar2 = FUN_00402590(param_1,"%s Salt Length: 0x",pcVar3);
              if (0 < iVar2) {
                if (param_3[2] == 0) {
                  iVar2 = FUN_004044c0(param_1,"14 (default)");
                }
                else {
                  iVar2 = FUN_00462880(param_1);
                }
                if (0 < iVar2) {
                  FUN_004044c0(param_1,&DAT_0396725e);
                  iVar1 = FUN_004048a0(param_1,iVar1,0x80);
                  if ((iVar1 != 0) && (iVar1 = FUN_004044c0(param_1,"Trailer Field: 0x"), 0 < iVar1)
                     ) {
                    if (param_3[3] == 0) {
                      iVar1 = FUN_004044c0(param_1,"BC (default)");
                    }
                    else {
                      iVar1 = FUN_00462880(param_1);
                    }
                    if (0 < iVar1) {
                      FUN_004044c0(param_1,&DAT_0396725e);
                      bVar4 = true;
                      goto LAB_0049714c;
                    }
                  }
                }
              }
            }
          }
          bVar4 = false;
          goto LAB_0049714c;
        }
      }
    }
  }
LAB_00497144:
  bVar4 = false;
  puVar5 = (undefined8 *)0x0;
LAB_0049714c:
  FUN_00446a50(puVar5);
  return bVar4;
}


