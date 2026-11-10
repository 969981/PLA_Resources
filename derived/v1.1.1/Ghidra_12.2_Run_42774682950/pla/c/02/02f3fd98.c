/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3fd98; name: FUN_02f3fd98
 */


void FUN_02f3fd98(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined2 local_78;
  char local_76;
  uint local_74;
  undefined1 auStack_70 [16];
  
  lVar1 = param_1 + 0xf0;
  FUN_02f40568(lVar1,auStack_70);
  FUN_02f40538(lVar1);
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      local_78 = 0xff00;
      uVar3 = FUN_02f4078c(lVar1,&local_78,&local_74);
      if (((uVar3 & 1) == 0) || (param_4 < local_74)) break;
      if ((char)local_78 == -0x50) {
        puVar6 = (undefined8 *)param_2[1];
        if (puVar6 != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
          cVar4 = -0x50;
          while( true ) {
            if (((cVar4 == -0x50) && (*(char *)(puVar6 + 1) == -0x50)) &&
               (*(char *)((long)puVar6 + 10) == local_76)) {
              puVar5 = (undefined8 *)puVar6[3];
              plVar2 = param_2 + 1;
              if ((undefined8 *)param_2[1] != puVar6) {
                plVar2 = puVar8 + 3;
              }
              *plVar2 = (long)puVar5;
              if ((undefined8 *)*param_2 == puVar6) {
                *param_2 = puVar8;
              }
              FUN_02e7c354(*puVar6);
              FUN_02f59e60(0,puVar6);
            }
            else {
              puVar5 = (undefined8 *)puVar6[3];
              puVar8 = puVar6;
            }
            puVar6 = puVar5;
            if (puVar6 == (undefined8 *)0x0) break;
            cVar4 = (char)local_78;
          }
        }
        FUN_02e7c1ac(param_1,param_2,&local_78,param_3,local_74,0,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
  }
  FUN_02f4058c(lVar1,auStack_70);
  return;
}


