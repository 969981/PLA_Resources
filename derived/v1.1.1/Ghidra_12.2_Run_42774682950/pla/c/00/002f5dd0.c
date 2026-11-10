/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5dd0; name: FUN_002f5dd0
 */


void FUN_002f5dd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  int *__ptr;
  int *piVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  
  FUN_002ef750(&DAT_0438f878);
  puVar2 = PTR_DAT_043738d8;
  if (PTR_DAT_043738d8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_manager.cc",0x144,1,
                 "stop timer threads: threaded=%d",DAT_0438f848);
  }
  if (DAT_0438f848 == '\x01') {
    DAT_0438f848 = '\0';
    FUN_002ef9b0(&DAT_0438f898);
    puVar1 = PTR_LAB_04373088;
    if (puVar2[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_manager.cc",0x14a,1,
                   "num timer threads: %d",DAT_0438f84c);
      puVar1 = PTR_LAB_04373088;
    }
    PTR_LAB_04373088 = puVar1;
    if (0 < DAT_0438f84c) {
      do {
        auVar6 = FUN_002eefd0(0);
        FUN_002ef8a0(&DAT_0438f8b8,&DAT_0438f878,auVar6._0_8_,auVar6._8_8_);
        piVar4 = DAT_0438f858;
        if (puVar2[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/timer_manager.cc",0x14f,1,
                       "num timer threads: %d",DAT_0438f84c);
          piVar4 = DAT_0438f858;
        }
        DAT_0438f858 = piVar4;
        if (piVar4 != (int *)0x0) {
          DAT_0438f858 = (int *)0x0;
          FUN_002ef790(&DAT_0438f878);
          plVar3 = *(long **)(piVar4 + 2);
          if (plVar3 != (long *)0x0) goto LAB_002f5ee4;
          do {
            __ptr = piVar4;
            if (*piVar4 != 4) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x97,2,
                           "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            while( true ) {
              piVar4 = *(int **)(__ptr + 8);
              free(__ptr);
              if (piVar4 == (int *)0x0) {
                FUN_002ef750(&DAT_0438f878);
                goto LAB_002f5e70;
              }
              plVar3 = *(long **)(piVar4 + 2);
              if (plVar3 == (long *)0x0) break;
LAB_002f5ee4:
              (**(code **)(*plVar3 + 0x18))();
              puVar5 = *(undefined8 **)(piVar4 + 2);
              if (puVar5 != (undefined8 *)0x0) {
                (**(code **)*puVar5)(puVar5);
                FUN_002e2ea0(puVar1,puVar5);
              }
              *piVar4 = 3;
              piVar4[2] = 0;
              piVar4[3] = 0;
              __ptr = piVar4;
            }
          } while( true );
        }
LAB_002f5e70:
      } while (0 < DAT_0438f84c);
    }
  }
  DAT_0438f870 = 0;
  FUN_002ef790(&DAT_0438f878);
  return;
}


