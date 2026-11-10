/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f44f28; name: FUN_02f44f28
 */


/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_02f44f28(long *param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  plVar6 = param_1 + 0x13;
  puVar4 = (undefined8 *)*plVar6;
  if (puVar4 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar5 = puVar4;
    puVar10 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
    while( true ) {
      puVar8 = puVar5;
      puVar9 = (undefined8 *)*puVar4;
      param_1[0x13] = (long)puVar9;
      if ((undefined8 *)param_1[0x12] == puVar8) {
        param_1[0x12] = 0;
        *puVar8 = 0;
      }
      else {
        *puVar8 = 0;
      }
      puVar11 = puVar4;
      if (puVar12 != (undefined8 *)0x0) {
        *puVar10 = puVar8;
        puVar11 = puVar12;
      }
      if (puVar9 == (undefined8 *)0x0) break;
      puVar4 = puVar9;
      puVar5 = (undefined8 *)*plVar6;
      puVar10 = puVar8;
      puVar12 = puVar11;
      if ((undefined8 *)*plVar6 != puVar9) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_02f4534c(param_1);
  }
  else {
    uVar2 = 0;
  }
  lVar3 = FUN_02f453f0(param_1,uVar2);
  if ((lVar3 != 0) && (puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x58), puVar4 != (undefined8 *)0x0))
  {
    *puVar4 = 0;
    puVar4[1] = lVar3;
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    puVar4[8] = 0x400000000;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    *(undefined1 *)(puVar4 + 9) = 0;
    *puVar4 = 0;
    *(byte *)(puVar4 + 10) = *(byte *)(puVar4 + 10) & 0xf8;
    if (*plVar6 == 0) {
      *plVar6 = (long)puVar4;
      puVar5 = puVar4;
    }
    else {
      *(undefined8 **)param_1[0x12] = puVar4;
      puVar5 = (undefined8 *)param_1[0x13];
    }
    param_1[0x12] = (long)puVar4;
    param_1[0x14] = (long)puVar5;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_50,auStack_34,auStack_38,0,0);
    if (iVar1 != 0) {
      if (puVar11 == (undefined8 *)0x0) {
        return 1;
      }
      do {
        puVar4 = (undefined8 *)*puVar11;
        *(byte *)(puVar11 + 10) = *(byte *)(puVar11 + 10) & 0xfc;
        (**(code **)(*(long *)puVar11[1] + 0x10))((long *)puVar11[1],0);
        plVar6 = (long *)puVar11[1];
        puVar11[1] = 0;
        if (plVar6 != (long *)0x0) {
          iVar1 = (int)plVar6[9] + -1;
          *(int *)(plVar6 + 9) = iVar1;
          if (iVar1 == 0) {
            if (plVar6[2] == 0) {
              FUN_02f37eb4(plVar6);
            }
            else {
              FUN_02f3b8c0(plVar6[2],plVar6);
              plVar6[2] = 0;
            }
            (**(code **)(*plVar6 + 0x50))(plVar6);
            (*DAT_0442d150)(0,plVar6);
            plVar6 = (long *)puVar11[1];
          }
          else {
            plVar6 = (long *)puVar11[1];
          }
          if (plVar6 != (long *)0x0) {
            iVar1 = (int)plVar6[9] + -1;
            *(int *)(plVar6 + 9) = iVar1;
            if (iVar1 == 0) {
              if (plVar6[2] == 0) {
                FUN_02f37eb4(plVar6);
              }
              else {
                FUN_02f3b8c0(plVar6[2],plVar6);
                plVar6[2] = 0;
              }
              (**(code **)(*plVar6 + 0x50))(plVar6);
              (*DAT_0442d150)(0,plVar6);
            }
            puVar11[1] = 0;
          }
        }
        (*DAT_0442d150)(0,puVar11);
        puVar11 = puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      return 1;
    }
  }
  while (puVar11 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar11;
    *puVar11 = 0;
    plVar7 = plVar6;
    if (*plVar6 != 0) {
      plVar7 = (long *)param_1[0x12];
    }
    *plVar7 = (long)puVar11;
    param_1[0x12] = (long)puVar11;
    puVar11 = puVar4;
  }
  return 2;
}


