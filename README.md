## 뇌를 자극하는 윈도우즈 시스템 프로그래밍 

### [1장 컴퓨터 구조에 대한 첫 번째 이야기](./chapter01/01.md)
- 시스템 프로그래밍의 이해와 접근
  - 시스템 프로그래밍이란 (System Programming)?
  - 컴퓨터 시스템의 주요 구성요소
- 컴퓨터 하드웨어의 구성
  - CPU (Central Processing Unit)
  - 메인 메모리 (Main memory)
  - 입.출력 버스 (Input/Output Bus)
- CPU에 대한 이해
  - ALU (Arithmetic Logic Unit)
  - 컨트롤 유닛 (Control Unit)
  - CPU 내부에 존재하는 레지스터들 (Register Set)
  - 버스 인터페이스 (Bus Interface)
  - 클럭 신호 (Clock Pulse)
- 프로그램의 실행 과정
  - 위대한 수학자 폰 노이만
  - 프로그램의 실행 과정
- 하드웨어의 구성의 재접근

### [2장 아스키코드 vs 유니코드](./chapter02/03.md)
- Windows 에서의 유니코드(UNICODE)
  - 문자셋의 종류와 특성
  - MBCS 기반의 문자열
  - WBCS 기반의 프로그래밍
- MBCS 와 WBCS 의 동시 지원
  - `#include <windows.h>
  - Windows에서 정의하고 있는 자료형
  - MBCS 와 WBCS (유니코드)를 동시에 지원하기 위한 매크로
  - MBCS 와 WBCS (유니코드)를 동시에 지원하기 위한 함수들

### 3장 64비트 기반 프로그래밍
- WIN 32 vs WIN 64
  - 64비트와 32비트
  - 프로그래머 입장에서의 64비트 컴퓨터
- 프로그램 구현 관점에서의 WIN 32 vs WIN 64
  - LLP64 vs LP64
  - 64비트와 32비트 공존의 문제점
  - Windows 스타일 자료형
  - Windows 자료형 확인하기
  - Polymorphic 자료형
- 오류의 확인
  - GetLastError 함수와 에러코드
- System Programming Project Design
  - 명령 프롬프트 프로젝트의 제안
  - 명령 프롬프트 프로젝트의 제안과 EXIT 명령어의 구현

### [4장 컴퓨터 구조에 대한 두 번째 이야기](./chapter04/4장.md)
- 컴퓨터 구조의 접근 방법
  - 컴퓨터를 디자인하자
  - 레지스터를 디자인하자
  - 명령어 구조 및 명령어를 디자인하자
- LOAD & STORE 명령어 디자인
  - LOAD & STORE 명령의 필요성
  - LOAD & STORE 명령의 디자인
- Direct 모드와 Indirect 모드
  - Direct 모드의 문제점과 Indirect 모드의 제안
  - Indiret 모드의 이해
  - Indirect 모드 활용 예제
### [5장 프로세스의 생성과 소멸](./chapter05/5-1/프로세스의이해.md)
- 프로세스의 이해
  - 프로세스란 무엇인가?
  - 프로세스를 구성하는 요소
- 프로세스의 스케줄링과 상태 변화
  - 프로세스의 스케줄링(Scheduling)
  - 프로세스의 상태 변화
  - 프로세스의 상태 변화, 시나리오로 다시 이해하기
- 컨텍스트 스위칭(Context Switching)
- 프로세스의 생성
  - 프로세스의 생성
  - CreateProcess 함수의 이해
  - 예제를 통한 CreateProcess 함수의 이해
  - 실습을 위한 환경의 구성 및 실행
- 프로세스 생성과 관련된 예제 그리고 문제점
- 명령 프롬프트 프로젝트 기능 추가

### [6장 커널 오브젝트와 오브젝트 핸들](./chapter06/6-1/커널오브젝트.md)
- 커널 오브젝트에 대한 이해
  - 커널 오브젝트의 이해
  - 그 이외의 커널 오브젝트들
- 커널 오브젝트와 핸들의 종속 관계
- 커널 오브젝트와 Usage Count
- 명령 프롬프트 프로젝트 기능 추가

### [7장 프로세스간 통신(IPC) 1](./chapter07/프로세스간통신.md)
-  프로세스간 통신(IPC) 의 의미
-  메일슬롯 방식의 IPC
-  Signaled vs Non-Signaled


### [8장 프로세스간 통신(IPC) 2](./chapter08/프로세스통신2.md)
-  핸들 테이블과 오브젝트 핸들의 상속
-  파이프 방식의 IPC
-  프로세스 환경 변수
-  명령 프롬프트 프로젝트 기능 추가

### [9장 스케줄링 알고리즘과 우선순위](./chapter09/스케줄링.md)
- 프로세스의 스케줄링(Scheduling)
  - 일반 OS 와 리얼타임 OS 의 차이점
  - Sott RTOS vs Hard RTOS
  - 선점형 OS 와 비선점형 OS
  - 우선순위 스케줄링 알고리즘
  - 라운드 로빈 스케줄링 알고리즘
  - 스케줄링 알고리즘에 의해서 스케줄링이 진행되는 시점
  - Priority Inversion
- Windows 프로세스 우선순위
- 명령 프롬프트 프로젝트 기능 추가
  - 리다이렉션의 이해
  - 리다이렉션 구현방법
  - 필자가 구현한 답안

### [10장 컴퓨터 구조에 대한 세 번째 이야기](./chapter10/10.md)
- 절차적 호출 지원  CPU 모델
  - 스택 프레임(Stack Frame) 구조
  - sp 레지스터
  - 프레임 포인터(Frame Pointer) 레지스터
  - 스택에 저장하자, 프레임 포인터(Frame Pointer)
- 함수 호출 인자의 전달과 PUSH & POP 명령어 디자인
  - 함수 호출 인자의 전달방삭
  - PUSH & POP 명령어 디자인
- 함수 호출(Procedure) 에 의한 실행의 이동
  - 다시 살펴보는 메모리 구조와 프로그램 카운터(Program Counter)
  - 함수 호출과 함수 종료
- 함수 호출 규약(Calling Convention)

### [11장 쓰레드의 이해](./chapter11/11.md)
- 쓰레드란 무엇인가?
  - 멀티 프로세스 기반 프로그램
  - 멀티 프로세스 운영체제 기반 프로그램의 문제점과 새로운 제안
  - 해결책, 쓰레드
  - 메모리 구조 관점에서 본 프로세스와 쓰레드
  - Windows에서의 프로세스와 쓰레드
- 쓰레드 구현 모델에 따른 구분
  - 커널 레벨(Kernel Level ) 쓰레드와 유저 레벨(User Level) 쓰레드
  - 커널 모드(Kernel Mode)와 유저 모드 (User Mode)
  - 커널 레벨 쓰레드와 유저 레벨 쓰레드의 장점 및 단점


### [12장 쓰레드의 생성과 소멸](./chapter12/12.md)
- Windows에서의 쓰레드 생성과 소멸
  - 쓰레드의 생성
  - 쓰레드의 소멸(쓰레드 생성에 대한 추가적인 이야기 포함)
- 쓰레드의 성격과 특성
  - 힙,데이터 영역, 그리고 코드 영역의 공유에 대한 검증
  - 동시접근에 있어서의 문제점
  - 프로세스로부터의 쓰레드 분리
  - ANSI 표준 C 라이브러리와 쓰레드
- 쓰레드의 상태 컨트롤
  - 쓰레드의 상태 변화
  - Suspend & Resume
- 쓰레드의 우선순위 컨트롤

### [13장 쓰레드 동기화 기법 1](./chapter13/13.md)
- 쓰레드 동기화란 무엇인가 ?
  - 두 가지 관점에서의 쓰레드 동기화
  - 쓰레드 동기화에 있어서의 두 가지 방법
- 임계 영역(Critical Section) 접근 동기화
  - 임계 영역(Critical Section)에 대한 이해
- 유저 모드 동기화(Synchronization In User Mode)
  - 크리티컬 섹션(Critical Section) 기반의 동기화
  - 인터락(Interlocked Family Of Function) 함수 기반의 동기화
- 커널 모드 동기화(Synchronization In Kernel Mode)
  - 뮤텍스(Mutex) 기반의 동기화
  - 세마포어(Semaphore) 기반의 동기화
  - 이름있는 뮤텍스(Named Mutex) 기반의 프로세스 동기화
  - 뮤텍스의 소유와 WAIT_ABANDONED

### 14장 쓰레드 동기화 기법 2
- 실행 순서에 있어서의 동기화
  - 생산자/소비자 모델
  - 이벤트 기반 동기화
  - 수동 리셋 모드 이벤트의 활용 예
- 이벤트 더하기 뮤텍스
    - 이벤트와 뮤텍스 오브젝트 적용 예제
- 타이머 기반 동기화
    - 수동 리셋 타이머
    - 주기적 타이머



### 15장 쓰레드 풀링(Pooling)

- 쓰레드 풀에 대한 이해
- 쓰레드 풀의 구현
  - 쓰레드 풀 구현의 모듈별 해석
  - 쓰레드 풀 구현 소스코드
- 명령 프롬프트 프로젝트 기능 추가
  - 입력과 출력을 연결하는 파이프
  - 구현 원리
  - 구현 사례

### [16장 컴퓨터 구조에 대한 네 번째 이야기](chapter16/컴구네번째이야.md)

- 메모리 계층(Memory Hierarchy)
  - 메모리 범위와 종류
  - 메모리의 계층 구조(Memory Hierarchy)

- 캐쉬와 캐쉬 알고리즘
    - 컴퓨터 프로그램의 일반적인 특성
    - 캐쉬 알고리즘
    - 캐쉬 프렌드리 코드(Cache Freindly Code) 작성 기법

- 가상 메모리(Virtual Memory) 
  - 물리 주소(Physical)
  - 가상 주소 시스템 1
  - 가상 주소 시스템 2
  
### 17장 구조적 예외처리(SEH) 기법

- SEH(Structed Exception Handling)
  - 예외처리의 필요성
  - 예외와 에러의 차이점
  - 하드웨어 예외와 소프트웨어 예외
- 종료 핸들러(Termination Handler)
    - 종료 핸들러의 기본 구성과 동작 원리
    - 종료 핸들러 활용 사례 연구1
    - 종료 핸들러 활용 사례 연구2
- 예외 핸들러(Exception Handler)
    - 예외 핸들러와 필터
    - 예외 핸들러의 활용 사례 연구
    - 처리되지 않은 예외의 이동
    - 핸들러의 중복
    - 정의 되어 있는 예외의 종류와 예외를 구분하는 방법
    - EXCEPTION_CONTINUE_EXCUTION & EXCEPTION_CONTINUE_SEARCH
- 소프트웨어 기반의 개발자 정의 예외
  - 소프트웨어 예외의 발생
  - GetExceptionInformation


### 18장 파일 I/O 와 디렉터리 컨트롤
- 기본적인 파일 처리 함수들
  - 파일 열기 & 닫기
  - 파일 읽기 & 쓰기와 포인터
  - 파일을 열어서 읽고 쓰고 닫는 예제
  - 파일의 시간 정보 얻어오기
  - 파일 사이즈 얻어오기
  - 파일의 특성 정보 얻어오기
  - 파일의 특성 정보 핸들로부터 얻어오기
  - 파일의 경로 정보 얻어오기
  - 파일 포인터의 이동 - 32비트 기반
  - 파일 포인터의 이동 - 64비트 기반
- 디렉터리 관련 함수 및 그밖의 함수들
    - 디렉터리의 생성과 소멸
    - 현재 디렉터리, 시스템 디렉터리 그리고 Windows 디렉터리
    - 디렉터리에서 파일 찾기
- 명령 프롬프트 프로젝트 기능 추가
    - XCOPY의 이해
    - XCOPY의 구현 범위 및 방법
    - XCOPY의 구현 사례

### 19장 비동기 I/O 와 APC

- 비동기(Asynchronous) I/O
  - 비동기 I/O 의 이해
  - 중첩(Overlapped) I/O
  - 중첩(Overlapped) I/O 예제
  - 완료루틴(Completion Routine) 기반 확장 I/O
  - 알림 가능한 상태(Alertable State)
  - OVERLAPPED 구조체의 파일 위치 정보
  - 타이머에서의 완료 루틴
  - 지금까지의 내용 정리
- APC(Asynchronous Procedure Call)
    - APC의 구조
    - APC Queue의 접근

### 20장 메모리 관리(Virtual Memory , Heap ,  MMF)

- 가상 메모리(Virtual Memory) 컨트롤
  - Reserve, Commit 그리고 Free
  - 메모리 할당의 시작점과 단위 확인하기
  - VirtualAlloc & VirtualFree 함수
  - Dynamic Array Design
- 힙(Heap) 컨트롤
    - 힙(Heap) 컨트롤에 대한 필자의 기억
    - 디폴트 힙(Default Heap) & Windows 시스템에서의 힙
    - 디폴트 힙 컨트롤
    - 힙(Dynamic Heap) 생성이 가져다 주는 또 다른 이점
    - 힙의 생성과 소멸 그리고 할당
    - Heap & Linked List 예제
- MMF(Memory Mapped File)
    - MMF의 이해
    - MMF의 구현과정
    - MMF의 구현 함수
    - MMF의 구성 예제1
    - 일고 쓰기 위한 MMF
    - Copy-On-Write(COW)
### 21장 Dynamic Linking Library
- 라이브러리와 printf!
  - 질문
  - 해답은 라이브러리
  - 라이브러리 작성에 대한 동기
  - 라이브러리 작성
  - STATIC LIBRARY
- 또 다른 라이브러리 DLL
  - DLL(Dynamic Linking Library)에 대한 이해
  - DLL 과 정적 라이브러리의 차이점
  - DLL 제작 1: 암묵적 연결 (Implicit Linking)
  - DLL 과 extern 선언
  - DLL 제작 2 : 명시적 연결 (Explicit Linking)
  - 한번 이상 로드될 수 있는 DLL
- 도대체 해더파일을 몇 개나 만들 작정이야!
  - 필요한 헤더파일의 개수는 최소한 세 개
  - 하나의 헤더파일로 모두 지원하기

